/*
** EPITECH PROJECT, 2019
** GA
** File description:
** tools
*/

#ifndef TOOLS_H_
#define TOOLS_H_

#include <cmath>
#include <iostream>
#include <random>
#include <vector>
class Tools {
public:
  static std::vector<int> GetFixedSumSequence(const int num, const int sum);
  inline static int RandomInt(const int &l, const int &r);
  inline static double RandomDouble(const double &l, const double &r);
};

inline int Tools::RandomInt(const int &l, const int &r) {
  static std::default_random_engine e(time(nullptr));
  std::uniform_int_distribution<int> u(l, r);
  return u(e);
}

inline double Tools::RandomDouble(const double &l, const double &r) {
  static std::default_random_engine e(time(nullptr));
  std::uniform_real_distribution<double> u(l, r);
  double ans = u(e);
  ans = floor(ans * 1000.000f + 0.5) / 1000.000f;
  return ans;
}

#endif /* !TOOLS_H_ */