#include "config.h"
#include "simulation.h"
#include <iomanip>
#include <iostream>
#include <memory>

int main() {
  std::cout << std::fixed << std::setprecision(4);

  // Config::Initialize();

  std::unique_ptr<Simulation> sim = std::make_unique<Simulation>();
  sim->RunFrameWork();

  return 0;
}