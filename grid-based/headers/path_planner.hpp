#pragma once

#include <vector>

class PathPlanner {
public:
    using GridType = std::vector<std::vector<int>>;

    explicit PathPlanner(GridType initial_grid) : grid_(std::move(initial_grid)) {}

    virtual ~PathPlanner() = default;

    virtual void planPath() = 0;

protected:
    const GridType& grid() const {
        return grid_;
    }
    const std::vector<std::pair<int, int>> neighbours = {
        {-1, 0}, // Up
        {1, 0},  // Down
        {0, -1}, // Left
        {0, 1}   // Right
    };

private:
    GridType grid_;
};