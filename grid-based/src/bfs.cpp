#include <bfs.hpp>

#include <iostream>

#include <queue>

void BFS::planPath() {
    // Implement the BFS path planning algorithm here
    
    std::queue<std::vector<int>> q; // {row, col, dist}

    q.push({start_.first, start_.second, 0});
    visited_[start_.first][start_.second] = 2; // Mark the start cell as visited

    while(!q.empty()){
        std::vector<int> current_cell = q.front();
        q.pop();
        int dist = current_cell[2];

        if (current_cell[0] == goal_.first && current_cell[1] == goal_.second){
            std::cout << "Steps to Goal: " << dist;
            break;
        }
        
        for (const auto& neighbour : neighbours) {
            if (visited_[neighbour[0]][neighbour[1]] == 2) {
                continue; // Skip already visited cells
            }
            q.push({neighbour[0], neighbour[1], dist + 1});
            visited_[neighbour[0]][neighbour[1]] = 2; // Mark as visited
        }
    }
}