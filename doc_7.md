# Dijkstra’s Algorithm for Shortest Path in a Weighted Graph 
## Explanation of How the Data Structures Are Defined

The program represents the weighted graph using an adjacency matrix.

int graph[MAX][MAX];


graph[i][j] stores the weight of the edge between vertex i and j.

A value of 0 indicates no direct edge.

Two additional arrays are used:

int dist[MAX];
int visited[MAX];


dist[] stores the shortest distance from the source to each vertex.

visited[] keeps track of vertices already processed.

A constant INF is used to represent infinity.

## Description of the Functions Implemented, Including Their Purpose
minDistance(int dist[], int visited[], int n)

Finds and returns the index of the unvisited vertex with the minimum distance value.

dijkstra(int graph[MAX][MAX], int n, int src)

Implements Dijkstra’s algorithm:

Initializes distance values.

Repeatedly selects the nearest unvisited vertex.

Updates distances of adjacent vertices.

Finally prints the shortest distance from the source to all vertices.

## Overview of How the main() Method Is Organized

The main() function performs the following steps:

Defines the number of vertices.

Initializes the weighted adjacency matrix.

Sets the source vertex.

Calls the dijkstra() function.

Displays the shortest distances from the source to all other vertices.

This demonstrates the complete execution of Dijkstra’s algorithm.

## Sample Output of a Complete Run of the Program
Vertex  Distance from Source
0       0
1       10
2       50
3       30
4       60

## Conclusion

This program demonstrates how Dijkstra’s algorithm can be implemented using an adjacency matrix to find the shortest paths in a weighted graph.