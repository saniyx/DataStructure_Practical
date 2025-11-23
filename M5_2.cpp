//2. Write a program to represent a graph using an adjacency list.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, edges, u, v;
    cout << "Enter number of vertices: ";
    cin >> n;

    vector<int> adj[n];

    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected
    }

    cout << "\nAdjacency List:\n";
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (int node : adj[i])
            cout << node << " ";
        cout << endl;
    }
}
