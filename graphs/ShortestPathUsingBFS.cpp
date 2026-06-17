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
        if (direction == 0) 
            adj[v].push_back(u);
    }

    // BFS to print shortest path from start to target
    void bfsPrintPath(int start, int target) {
        int n = adj.size();
        vector<bool> visited(n, false);
        vector<int> parent(n, -1);    // parent array

        queue<int> q;

        visited[start] = true;
        q.push(start);

        bool found = false;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            if (u == target) {
                found = true;
            
                break;   // we found the shortest path
            }

            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    parent[v] = u;    // store where we came from
                    q.push(v);
                }
            }
        }

        if (!found) {
            cout << "No path exists!\n";
            return;
        }

        // Reconstruct path by walking backwards from target
        vector<int> path;
        int curr = target;

        while (curr != -1) {
            path.push_back(curr);
            curr = parent[curr];
        }

        // Reverse to get path from start to target
        reverse(path.begin(), path.end());

        cout << "Shortest Path: ";
        for (int node : path)
            cout << node << "->";
    }
};

int main() {
    Graph g(6);

    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(1,4,0);
    g.addEdge(4,5,0);

    g.bfsPrintPath(0, 5);
    return 0;
}
