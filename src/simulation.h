/*
** EPITECH PROJECT, 2019
** GA
** File description:
** simulation
*/

#ifndef SIMULATION_H_
#define SIMULATION_H_

#include "config.h"
#include "unit.h"
#include <memory>
#include <vector>

class Simulation {
public:
  void Initialize();           // 初始化
  void RunFrameWork();         // 流程控制
  void InitializePopulation(); // 初始化种群
  void Evolution();            // 进化算法
  void Exchange();             // 交叉
  void Variation();            // 变异
  void Select();               // 选择带精英保留

  void debug();
  void logStep(int epoch);

  void doExchange(const std::vector<int> &u1, const std::vector<int> &u2,
                  std::vector<int> &n1, std::vector<int> &n2);

private:
  std::vector<std::unique_ptr<Unit>> m_population;
  std::vector<std::unique_ptr<Unit>> m_sons;
  double m_firstEpochBestValue = 0.0;
  const double m_eps = 1e-3;
};

#endif /* !SIMULATION_H_ */
