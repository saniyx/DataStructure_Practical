//1. Write a program to represent a graph using an adjacency matrix.
#include <iostream>
using namespace std;

int main() {
    int n, edges, u, v;
    cout << "Enter number of vertices: ";
    cin >> n;

    int adj[n][n] = {0};

    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Enter edges (u v):"<<endl;
    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        adj[u][v] = adj[v][u] = 1;
    }

    cout << "Adjacency Matrix:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }
}
