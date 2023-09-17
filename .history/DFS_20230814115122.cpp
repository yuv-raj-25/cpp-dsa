#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void dfs(const vector<vector<int>>& graph, int node, unordered_set<int>& visited) {
    if (visited.find(node) == visited.end()) {
        cout << node << " ";  // Process the current node
        visited.insert(node); // Mark the node as visited
        
        for (int neighbor : graph[node]) {
            dfs(graph, neighbor, visited);  // Recursively visit unvisited neighbors
        }
    }
}

int main() {
    // Example graph as an adjacency list
    vector<vector<int>> graph = {
        {1, 2},
        {3, 4},
        {5},
        {},
        {5},
        {}
    };

    // Set to keep track of visited nodes
    unordered_set<int> visited;

    // Start DFS from node 0
    dfs(graph, 0, visited);

    return 0;
}



