/*
** EPITECH PROJECT, 2019
** ACM
** File description:
** time
*/

#ifndef TIME_H_
#define TIME_H_

#include <chrono>
#include <iostream>
#include <string>

class ScopeTime {
public:
  ScopeTime() : m_begin(std::chrono::high_resolution_clock::now()) {}

  int64_t elapsed() const {
    return std::chrono::duration_cast<std::chrono::milliseconds>(
               std::chrono::high_resolution_clock::now() - m_begin)
        .count();
  }

  int64_t elapsed_micro() const {
    return std::chrono::duration_cast<std::chrono::microseconds>(
               std::chrono::high_resolution_clock::now() - m_begin)
        .count();
  }

  int64_t elapsed_nano() const {
    return std::chrono::duration_cast<std::chrono::nanoseconds>(
               std::chrono::high_resolution_clock::now() - m_begin)
        .count();
  }

  int64_t elapsed_seconds() const {
    return std::chrono::duration_cast<std::chrono::seconds>(
               std::chrono::high_resolution_clock::now() - m_begin)
        .count();
  }

  int64_t elapsed_minutes() const {
    return std::chrono::duration_cast<std::chrono::minutes>(
               std::chrono::high_resolution_clock::now() - m_begin)
        .count();
  }

  int64_t elapsed_hours() const {
    return std::chrono::duration_cast<std::chrono::hours>(
               std::chrono::high_resolution_clock::now() - m_begin)
        .count();
  }

private:
  std::chrono::time_point<std::chrono::high_resolution_clock> m_begin;
};

#endif /* !TIME_H_ */
