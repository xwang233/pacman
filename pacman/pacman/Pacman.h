#pragma once

#include "MazeSolver.h"
#include "map/Map.h"

namespace pacman {
namespace pacman {

class Pacman {
  map::Map &_map;
  std::shared_ptr<MazeSolver> _solver;

public:
  void solve();

  Pacman(map::Map &map);
  Pacman() = delete;
};

} // namespace pacman
} // namespace pacman