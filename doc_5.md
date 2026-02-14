# Undirected Graph Using Adjacency Matrix with BFS and DFS 
## Explanation of How the Data Structures Are Defined

The program represents an undirected graph using an adjacency matrix.

int adj[MAX][MAX];


adj[i][j] = 1 indicates an edge between vertex i and vertex j.

adj[i][j] = 0 indicates no edge.

Since the graph is undirected, both directions are stored:

adj[u][v] = 1;
adj[v][u] = 1;


An additional array is used to keep track of visited vertices:

int visited[MAX];


This prevents revisiting the same node during BFS and DFS traversal.

## Description of the Functions Implemented, Including Their Purpose
BFS(int start)

Performs Breadth First Search traversal starting from the given vertex.

Uses a queue.

Visits vertices level by level.

Marks each visited vertex to avoid repetition.

Prints nodes in BFS order.

DFS(int v)

Performs Depth First Search traversal using recursion.

Visits a node and then explores its neighbors deeply before backtracking.

Uses the visited array to track explored vertices.

Prints nodes in DFS order.

## Overview of How the main() Method Is Organized

The main() function performs the following steps:

Reads the number of vertices and edges.

Initializes the adjacency matrix with zeros.

Accepts edge pairs from the user and fills the matrix for an undirected graph.

Calls BFS(0) to perform Breadth First Search starting from vertex 0.

Resets the visited array.

Calls DFS(0) to perform Depth First Search starting from vertex 0.

Displays both traversal results.

This demonstrates graph creation and traversal using BFS and DFS.

## Sample Output of a Complete Run of the Program
Input
Enter number of vertices: 4
Enter number of edges: 4
Enter edges (u v):
0 1
0 2
1 2
2 3

Output
BFS Traversal: 0 1 2 3
DFS Traversal: 0 1 2 3

## Conclusion

This program demonstrates how an undirected graph can be implemented using an adjacency matrix in C. It also shows BFS and DFS traversal techniques.