#include <iostream>
#include <vector>
#include <queue>
#include <limits>

void dijkstra(std::vector<std::vector<std::pair<int, int>>>& graph, int start) {
    int V = graph.size();
    std::vector<int> dist(V, std::numeric_limits<int>::max());
    dist[start] = 0;
    
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> minHeap;
    minHeap.push({0, start});
    
    while (!minHeap.empty()) {
        int u = minHeap.top().second;
        minHeap.pop();
        
        for (auto& edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;
            
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                minHeap.push({dist[v], v});
            }
        }
    }
    
    std::cout << "Shortest distances from node " << start << " to all other nodes:\n";
    for (int node = 0; node < V; ++node) {
        std::cout << "Node " << node << ": " << dist[node] << "\n";
    }
}

int main() {
    int V = 6; // Number of nodes in the graph
    std::vector<std::vector<std::pair<int, int>>> graph(V);
    
    // Adding edges to the graph (node, weight)
    graph[0].emplace_back(1, 2);
    graph[0].emplace_back(2, 4);
    graph[1].emplace_back(2, 1);
    graph[1].emplace_back(3, 7);
    graph[2].emplace_back(4, 3);
    graph[3].emplace_back(5, 1);
    graph[4].emplace_back(5, 5);
    
    int startNode = 0;
    
    dijkstra(graph, startNode);
    
    return 0;
}

