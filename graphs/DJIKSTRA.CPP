#include <iostream>
using namespace std;

class Dijkstra {
    int n;
    vector<vector<pair<int,int>>> adj; 
    // adj[u] = { {v, weight}, ... }

public:
    Dijkstra(int n) {
        this->n = n;
        adj.resize(n + 1);
    }

    void addEdge(int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});  // remove this if graph is directed
    }

    vector<int> shortestPath(int src) {
        vector<int> dist(n + 1, INT_MAX);
        vector<bool> visited(n + 1, false);

        priority_queue<
            pair<int,int>, 
            vector<pair<int,int>>, 
            greater<pair<int,int>>
        > pq;

        dist[src] = 0;
        pq.push({0, src});  // {distance, node}

        while(!pq.empty()) {
            auto [d, node] = pq.top();
            pq.pop();

            if(visited[node]) continue;
            visited[node] = true;

            for(auto &edge : adj[node]) {
                int next = edge.first;
                int weight = edge.second;

                if(dist[node] + weight < dist[next]) {
                    dist[next] = dist[node] + weight;
                    pq.push({dist[next], next});
                }
            }
        }

        return dist;  // shortest distance to every node
    }
};

int main() {
    Dijkstra g(5);

    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 4);
    g.addEdge(2, 3, 1);
    g.addEdge(2, 4, 7);
    g.addEdge(3, 5, 3);

    vector<int> dist = g.shortestPath(1);

    for(int i = 1; i <= 5; i++) {
        cout << "Distance to " << i << ": " << dist[i] << "\n";
    }
}
