/*
** EPITECH PROJECT, 2019
** GA
** File description:
** simulation
*/

#include "simulation.h"

#include <algorithm>
#include <cassert>
#include <iostream>
#include <memory>
#include <numeric>
#include <queue>

#include "config.h"
#include "scope_time.h"
#include "tools.h"
#include "unit.h"

std::vector<std::vector<double>> Config::VariationSpace;
std::vector<std::pair<double, double>> Config::Limits;

void Simulation::debug() {
  std::cout << "***************************************\n";
  std::cout << "* 初始自变量空间: \n";

  for (int i = 0; i < Config::EncodeLength; ++i) {
    std::cout << "* 第 " << i + 1 << " 个自变量: ";
    for (int j = 0; j < Config::VariationLength; ++j) {
      std::cout << Config::VariationSpace[i][j] << " ";
    }
    std::cout << "\n";
  }
  std::cout << "***************************************\n";
}

// 初始化
void Simulation::Initialize() {
  // 初始化自变量范围
  // Config::Limits = {{-3.0, 12.1}, {4.1, 5.8}};
  // Config::Limits = {{10.0, 12.1}, {5.0, 5.8}};
  // // 初始化自变量
  // for (int i = 0; i < Config::EncodeLength; ++i) {
  //   std::vector<double> vt;
  //   for (int j = 0; j < Config::VariationLength; ++j) {
  //     double rd = Tools::RandomDouble(Config::Limits[j].first,
  //                                     Config::Limits[j].second);
  //     vt.emplace_back(rd);
  //   }
  //   Config::VariationSpace.emplace_back(vt);
  // }

  // 你的三个x初始设为（10,4），（12,4）和（11.6,6）
  Config::VariationSpace = {{10.0, 4.3}, {12.0, 4.6}, {11.6, 5.8}};
}

void Simulation::RunFrameWork() {
  this->Initialize();
  this->Evolution();
}

// 初始化种群
void Simulation::InitializePopulation() {
  for (int i = 0; i < Config::PopulationSize; ++i) {
    std::unique_ptr<Unit> u = std::make_unique<Unit>();
    u->Initialize();
    m_population.emplace_back(std::move(u));
  }
}

void Simulation::logStep(int epoch) {
  std::cout << "代数: " << epoch << ", 最优: " << m_population[0]->GetFitness()
            << "\n";
  // m_population[0]->debug();
}

// 进化算法
void Simulation::Evolution() {
  ScopeTime time;

  this->InitializePopulation();
  double pre = m_population[0]->GetFitness();
  for (int epoch = 0; epoch < Config::GenerationSize; ++epoch) {
    this->Exchange();
    this->Variation();
    this->Select();
    this->logStep(epoch);
    if (epoch == 0) {
      m_firstEpochBestValue = m_population[0]->GetFitness();
    }
    if (m_population[0]->GetFitness() > pre) {
      pre = m_population[0]->GetFitness();
      m_firstBestEpoch = epoch;
    }
  }

  this->debug();

  std::cout << "***************************************\n";
  std::cout << "* 总代数: " << Config::GenerationSize << " 代\n";
  std::cout << "* 达到最优: " << m_firstBestEpoch << " 代\n";
  std::cout << "* GA第一代: " << m_firstEpochBestValue << "\n";
  std::cout << "* GA最优: " << m_population[0]->GetFitness() << "\n";
  std::cout << "* 实际最优: 38.8503\n";
  std::cout << "***************************************\n";

  m_population[0]->debug();

  std::cout << "运行时间: " << double(time.elapsed()) / 1000 << "s\n";
}

void Simulation::doExchange(const std::vector<int> &u1,
                            const std::vector<int> &u2, std::vector<int> &n1,
                            std::vector<int> &n2) {
  assert(!u1.empty());
  assert(!u2.empty());
  assert(n1.empty());
  assert(n2.empty());

  // n1 = u1;
  // n2 = u2;

  int sz = Config::EncodeLength;
  int l = Tools::RandomInt(0, sz - 1);
  int r = Tools::RandomInt(0, sz - 1);
  if (l > r) {
    std::swap(l, r);
  }

  for (int i = 0; i < l; ++i) {
    n1.emplace_back(u1[i]);
    n2.emplace_back(u2[i]);
  }
  for (int i = l; i <= r; ++i) {
    n1.emplace_back(u2[i]);
    n2.emplace_back(u1[i]);
  }
  for (int i = r + 1; i < sz; ++i) {
    n1.emplace_back(u1[i]);
    n2.emplace_back(u2[i]);
  }

  int sum1 = std::accumulate(n1.begin(), n1.end(), 0);
  int sum2 = std::accumulate(n2.begin(), n2.end(), 0);

  if (sum1 == 0 || sum2 == 0) {
    n1 = Tools::GetFixedSumSequence(sz, Config::EPS);
    n2 = Tools::GetFixedSumSequence(sz, Config::EPS);
    return;
  }

  double eps = Config::EPS * 1.0;
  double w1 = eps / sum1;
  double w2 = eps / sum2;

  sum1 = sum2 = 0;
  for (int i = 0; i < sz - 1; ++i) {
    n1[i] *= w1;
    n2[i] *= w2;
    sum1 += n1[i];
    sum2 += n2[i];
  }
  n1[sz - 1] = Config::EPS - sum1;
  n2[sz - 1] = Config::EPS - sum2;
}

void Simulation::Exchange() {
  int sz = m_population.size();

  m_sons.clear();

  for (int i = 0; i < sz - 1; i += 2) {
    std::vector<int> n1, n2;
    this->doExchange(m_population[i]->GetEncode(),
                     m_population[i + 1]->GetEncode(), n1, n2);

    std::unique_ptr<Unit> son1 = std::make_unique<Unit>(n1);
    std::unique_ptr<Unit> son2 = std::make_unique<Unit>(n2);

    m_sons.emplace_back(std::move(son1));
    m_sons.emplace_back(std::move(son2));
  }
}

void Simulation::Variation() {
  for (auto &v : m_sons) {
    v->Variation();
    v->Reset();
  }
}

void Simulation::Select() {
  // 父代 + 子代
  std::vector<std::unique_ptr<Unit>> all;
  for (auto &v : m_population) {
    all.emplace_back(std::move(v));
  }
  for (auto &v : m_sons) {
    all.emplace_back(std::move(v));
  }

  // 选出Topk，精英保留
  std::priority_queue<std::pair<double, int>> pq;
  int sz = all.size();
  double sumFitness = 0.0;
  for (int i = 0; i < sz; ++i) {
    double fitness = -all[i]->GetFitness();
    sumFitness -= fitness;
    if (pq.size() < Config::BestSaveCount) {
      pq.push({fitness, i});
    } else if (fitness < pq.top().first) {
      pq.pop();
      pq.push({fitness, i});
    }
  }
  m_population.clear();

  while (!pq.empty()) {
    int p = pq.top().second;
    pq.pop();
    m_population.emplace_back(std::make_unique<Unit>(all[p]->GetEncode()));
  }

  double pre = 0;
  for (auto &v : all) {
    double x = v->GetFitness() / sumFitness;
    v->SetChoseRate(pre + x);
    pre = pre + x;
  }

  for (int i = 0; i < Config::PopulationSize - Config::BestSaveCount; ++i) {
    double rd = Tools::RandomDouble(0, 1.0);
    if (rd == 1.0) {
      m_population.emplace_back(
          std::make_unique<Unit>(all[sz - 1]->GetEncode()));
      continue;
    }
    int low = 0, high = sz - 1, ans = -1;
    while (low <= high) {
      int mid = (low + high) / 2;
      if (all[mid]->GetChoseRate() >= rd) {
        ans = mid;
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }

    assert(ans != -1);
    m_population.emplace_back(std::make_unique<Unit>(all[ans]->GetEncode()));
  }
}