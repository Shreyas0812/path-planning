#pragma once

#include <vector>

class PathPlanner {
public:
    using Grid = std::vector<std::vector<int>>;

    explicit PathPlanner(Grid grid) : grid_(std::move(grid)) {}

    virtual ~PathPlanner() = default;

    virtual void planPath() = 0;

protected:
    const Grid& grid() const {
        return grid_;
    }

private:
    Grid grid_;
};