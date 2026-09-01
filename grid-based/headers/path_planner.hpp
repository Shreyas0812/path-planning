#pragma once

#include <vector>
#include <utility>

class PathPlanner {
public:
    using GridType = std::vector<std::vector<int>>;
    using NodeType = std::pair<int, int>;
    using neighboursType = std::vector<NodeType>;

    explicit PathPlanner(GridType initial_grid, NodeType start, NodeType goal) : 
        grid_(std::move(initial_grid)), 
        start_(std::move(start)), 
        goal_(std::move(goal)) 
    {}

    virtual ~PathPlanner() = default;

    virtual void planPath() = 0;

protected:
    const GridType& getGrid() const {
        return grid_;
    }

    const neighboursType neighbours = {
        {-1, 0}, // Up
        {1, 0},  // Down
        {0, -1}, // Left
        {0, 1}   // Right
    };

    
private:
    GridType grid_;
    NodeType start_;
    NodeType goal_;
};