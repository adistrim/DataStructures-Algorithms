# Graph Algorithms

## 1. BFS

BFS stands for Breadth-First Search. It is a graph traversal algorithm that visits all the vertices of a graph in breadth-first order, i.e., it visits all the vertices at the same distance from the starting vertex before moving on to vertices that are farther away.

The algorithm starts at a specified vertex (the source vertex) and explores all the vertices that are adjacent to it, then explores all the vertices that are adjacent to these adjacent vertices, and so on. The algorithm uses a queue data structure to keep track of the vertices that are waiting to be visited. The algorithm visits all the vertices in the connected component of the source vertex, and can be used to determine whether a graph is connected or not.

BFS can be used to solve many graph problems such as finding the shortest path between two vertices, checking if a graph is bipartite, and finding the connected components of a graph.

The time complexity of BFS algorithm is O(V+E) where V is the number of vertices and E is the number of edges in the graph.

## 2. DFS

DFS (Depth-First Search) is a graph traversal algorithm that explores a graph by visiting as far as possible along each branch before backtracking. It starts at a given source node, and explores as far as possible along each branch before backtracking.

The algorithm works by maintaining a stack of nodes to be visited, starting with the source node. At each step, it visits the top node on the stack and adds its unvisited neighbors to the stack. It repeats this process until there are no more nodes to visit or until the target node is found.

DFS is used in a variety of applications, including maze solving, pathfinding, and cycle detection.

## 3. Dijkstra's Algorithm

Dijkstra's algorithm is a shortest-path algorithm that finds the shortest path between a source vertex and all other vertices in a weighted graph. It is named after Edsger W. Dijkstra who developed it in 1956.

The algorithm works by starting from the source vertex and assigns a tentative distance to each vertex in the graph. Initially, the distance of the source vertex is set to 0, and the distances of all other vertices are set to infinity. The algorithm then selects the vertex with the smallest tentative distance, adds it to the visited set, and relaxes all of its outgoing edges. Relaxation is the process of updating the tentative distance of a vertex if a shorter path is found.

The algorithm continues this process, selecting the vertex with the smallest tentative distance from the set of unvisited vertices, adding it to the visited set, and relaxing its outgoing edges until all vertices have been visited or the destination vertex has been reached. The final distances represent the shortest path from the source vertex to all other vertices in the graph.

Dijkstra's algorithm is a greedy algorithm, meaning that it always selects the vertex with the smallest tentative distance, which is guaranteed to be the shortest path at that point in time. It also uses a priority queue to efficiently select the vertex with the smallest tentative distance.

Dijkstra's algorithm is widely used in many applications, including network routing protocols, maps, and airline route planning.

