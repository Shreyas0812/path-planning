#pragma once

#include "path_planner.hpp"

class BFS : public PathPlanner {
public:
    explicit BFS(Grid grid) : PathPlanner(std::move(grid)) {}

    void planPath() override;
};