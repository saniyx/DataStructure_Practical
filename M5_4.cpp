//Write a program to perform DFS traversal on a graph.
#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    // Visit all unvisited neighbours
    for (int neigh : adj[node]) {
        if (!visited[neigh]) {
            DFS(neigh, adj, visited);
        }
    }
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
        adj[v].push_back(u);  // for undirected graph
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    vector<bool> visited(n, false);

    cout << "DFS Traversal: ";
    DFS(start, adj, visited);
    cout << endl;

    return 0;
}
