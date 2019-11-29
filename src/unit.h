/*
** EPITECH PROJECT, 2019
** GA
** File description:
** unit
*/

#ifndef UNIT_H_
#define UNIT_H_

#include <vector>

class Unit {
public:
  Unit() {}
  Unit(const std::vector<int> &encode);

  void Initialize();
  void debug();

  void CalculateFitness();
  void Variation();
  void Reset();

  inline const std::vector<int> &GetEncode();
  inline const double &GetFitness();
  inline void SetChoseRate(const double &rate);
  inline const double &GetChoseRate();
  inline const int &GetEncodeSum();

private:
  std::vector<int> m_encode;
  int m_encodeSum = 0;
  double m_fitness = 0.0;
  double m_choseRate = 0.0;
  const double m_eps = 1e-3;
};

inline const std::vector<int> &Unit::GetEncode() { return m_encode; }
inline const double &Unit::GetFitness() { return m_fitness; }
inline void Unit::SetChoseRate(const double &rate) { m_choseRate = rate; }
inline const double &Unit::GetChoseRate() { return m_choseRate; }
inline const int &Unit::GetEncodeSum() { return m_encodeSum; }

#endif /* !UNIT_H_ */
