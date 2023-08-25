#include <iostream>
#include <queue>
using namespace std;

const int MAX_V = 1000; // Maximum number of vertices

class Graph {
    int V; // Number of vertices
    int adj[MAX_V][MAX_V]; // Adjacency matrix

public:
    Graph(int vertices) : V(vertices) {
        for (int i = 0; i < V; ++i) {
            for (int j = 0; j < V; ++j) {
                adj[i][j] = 0; // Initialize adjacency matrix
            }
        }
    }

    void addEdge(int u, int v) {
        adj[u][v] = 1;
    }

    void topologicalSort() {
        int inDegree[MAX_V] = {0}; // Initialize in-degrees for all vertices

        for (int u = 0; u < V; ++u) {
            for (int v = 0; v < V; ++v) {
                if (adj[u][v] == 1) {
                    inDegree[v]++;
                }
            }
        }

        queue<int> q;
        for (int u = 0; u < V; ++u) {
            if (inDegree[u] == 0) {
                q.push(u);
            }
        }

        cout << "Topological Ordering: ";
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            cout << u << " ";

            for (int v = 0; v < V; ++v) {
                if (adj[u][v] == 1) {
                    if (--inDegree[v] == 0) {
                        q.push(v);
                    }
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int V, E; // Number of vertices and edges
    cout << "Enter the number of vertices and edges: ";
    cin >> V >> E;

    Graph graph(V);

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    graph.topologicalSort();

    return 0;
}
