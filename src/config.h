/*
** EPITECH PROJECT, 2019
** GA
** File description:
** config
*/

#ifndef CONFIG_H_
#define CONFIG_H_

#include "tools.h"
#include <vector>

class Config {
public:
  static const int GenerationSize = 1000; // 种群迭代代数
  static const int PopulationSize = 500; // 种群大小（个体数目）
  static const int BestSaveCount = 10;   // 精英保留个体数目

  static const int EncodeLength = 3;                      // 个体编码长度
  static const int VariationLength = 2;                   // 自变量纬度
  static const int EPS = 10000;                           // 精度
  static constexpr double ExchangeRate = 1.00;            // 交叉概率
  static constexpr double VariationRate = 0.20;           // 变异概率
  static std::vector<std::vector<double>> VariationSpace; // 解空间
  static std::vector<std::pair<double, double>> Limits;
};

#endif /* !CONFIG_H_ */
