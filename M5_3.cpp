//Write a program to perform BFS traversal on a graph.
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void BFS(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        cout << node << " ";

        // Visit all neighbours
        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                visited[neigh] = true;
                q.push(neigh);
            }
        }
    }
    cout << endl;
}

int main() {
    int n, edges;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int>> adj(n);

    cout << "Enter edges (u v):" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);   // for undirected graph
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    BFS(start, adj, n);

    return 0;
}
