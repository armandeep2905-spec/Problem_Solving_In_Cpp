#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
public:
    vector<vector<int>> adj;

    Graph(int n) {
        adj.resize(n);
    }

    void addEdge(int u, int v, bool direction) {
        adj[u].push_back(v);
        if (direction == 0)          // undirected
            adj[v].push_back(u);
    }

    bool bfs(int start, int target) {
        int n = adj.size();

        vector<bool> visited(n, false);   // use vector instead of array
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            cout<<u<<" ";// target found

            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }

        return false;  // target not reachable
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(2, 4, 0);

    int start = 0;
    int target = 4;

    if (g.bfs(start, target))
        cout << "Path exists!";
    else
        cout << "Path does NOT exist!";

    return 0;
}