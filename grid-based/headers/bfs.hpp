#pragma once

#include <utility>

#include "path_planner.hpp"

class BFS : public PathPlanner {
public:
    explicit BFS(Grid grid, std::pair<int, int> start = {0, 0}, std::pair<int, int> goal = {0, 0})
        : PathPlanner(std::move(grid)), start_(start), goal_(goal) {}

    void planPath() override;
private:
    std::pair<int, int> start_;
    std::pair<int, int> goal_;
};