#include <iostream>
#include<stack>
#include<vector>

using namespace std;

class Graph {
public:
    int V;
    vector<vector<int>> adj;

    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> dfs(int start) {
        vector<bool> visited(V, 0);
        vector<int> result;
        stack<int> st;

        st.push(start);

        while (!st.empty()) {
            int node = st.top();
            st.pop();

            if (!visited[node]) {
                visited[node] = true;
                result.push_back(node);

                // Push neighbors in reverse order
                // so that they are visited in normal order
                for (int i = adj[node].size() - 1; i >= 0; i--) {
                    int neigh = adj[node][i];
                    if (!visited[neigh]) {
                        st.push(neigh);
                    }
                }
            }
        }

        return result;
    }
};

int main() {
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(1,3);

    vector<int> path = g.dfs(0);

    cout << "DFS using stack: ";
    for (int x : path) cout << x <<" ";
    cout << endl;

    return 0;
}
