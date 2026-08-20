#include <path_planner.hpp>
#include <bfs.hpp>

int main() {
    PathPlanner::Grid grid = {
        {0, 1, 0, 0},
        {0, 1, 0, 1},
        {0, 0, 0, 1},
        {1, 1, 0, 0}
    };

    BFS bfsPlanner(grid);
    bfsPlanner.planPath();

    return 0;
}