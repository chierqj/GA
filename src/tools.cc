/*
** EPITECH PROJECT, 2019
** GA
** File description:
** tools
*/

#include "tools.h"
#include <algorithm>
#include <iostream>

std::vector<int> Tools::GetFixedSumSequence(const int num, const int sum) {
  std::vector<int> vt;
  for (int i = 0; i < num - 1; ++i) {
    int rd = Tools::RandomDouble(0, sum);
    vt.emplace_back(rd);
  }
  vt.emplace_back(sum);
  std::sort(vt.begin(), vt.end());
  for (int i = vt.size() - 1; i > 0; --i) {
    vt[i] -= vt[i - 1];
  }
  return vt;
}