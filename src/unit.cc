/*
** EPITECH PROJECT, 2019
** GA
** File description:
** unit
*/

#include "unit.h"
#include <cassert>
#include <cmath>
#include <iostream>
#include <numeric>

#include "config.h"
#include "tools.h"

Unit::Unit(const std::vector<int> &encode) {
  m_encode = encode;
  this->Reset();
}

void Unit::Initialize() {
  m_encode = Tools::GetFixedSumSequence(Config::EncodeLength, Config::EPS);
  m_encodeSum = std::accumulate(m_encode.begin(), m_encode.end(), 0);
  assert(m_encodeSum == Config::EPS);
  this->CalculateFitness();
}

void Unit::Reset() {
  m_encodeSum = std::accumulate(m_encode.begin(), m_encode.end(), 0);
  assert(m_encodeSum == Config::EPS);
  this->CalculateFitness();
}

void Unit::CalculateFitness() {
  const std::vector<std::vector<double>> &variableSpace =
      Config::VariationSpace;

  double eps = Config::EPS * 1.0;
  double x1 = 0, x2 = 0;
  for (int i = 0; i < m_encode.size(); ++i) {
    double wi = (double)(m_encode[i]) / eps;
    x1 += wi * variableSpace[i][0];
    x2 += wi * variableSpace[i][1];
  }

  // double x1 = variableSpace[0] * ((double)(m_encode[0]) / eps);
  // double x2 = variableSpace[1] * ((double)(m_encode[1]) / eps);
  m_fitness = 21.5 + x1 * sin(4 * M_PI * x1) + x2 * sin(20 * M_PI * x2);
}

void Unit::Variation() {
  std::vector<int> Indexs;
  int sum = 0;
  for (int i = 0; i < m_encode.size(); ++i) {
    double rd = Tools::RandomDouble(0, 1.0);
    if (rd <= Config::VariationRate) {
      Indexs.emplace_back(i);
      sum += m_encode[i];
    }
  }
  std::vector<int> vt = Tools::GetFixedSumSequence(Indexs.size(), sum);
  for (int i = 0; i < Indexs.size(); ++i) {
    m_encode[Indexs[i]] = vt[i];
  }
}

void Unit::debug() {
  std::cout << "***************************************\n";
  std::cout << "* 适应度值: " << m_fitness << "\n";
  std::cout << "* 编码和: " << m_encodeSum << "\n";
  std::cout << "* 编码: ";
  for (auto &v : m_encode) {
    std::cout << v << " ";
  }
  std::cout << "\n***************************************\n";
}
