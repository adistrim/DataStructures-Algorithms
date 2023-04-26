# 1. BFS

BFS stands for Breadth-First Search. It is a graph traversal algorithm that visits all the vertices of a graph in breadth-first order, i.e., it visits all the vertices at the same distance from the starting vertex before moving on to vertices that are farther away.

The algorithm starts at a specified vertex (the source vertex) and explores all the vertices that are adjacent to it, then explores all the vertices that are adjacent to these adjacent vertices, and so on. The algorithm uses a queue data structure to keep track of the vertices that are waiting to be visited. The algorithm visits all the vertices in the connected component of the source vertex, and can be used to determine whether a graph is connected or not.

BFS can be used to solve many graph problems such as finding the shortest path between two vertices, checking if a graph is bipartite, and finding the connected components of a graph.

The time complexity of BFS algorithm is O(V+E) where V is the number of vertices and E is the number of edges in the graph.

# 2. DFS

DFS (Depth-First Search) is a graph traversal algorithm that explores a graph by visiting as far as possible along each branch before backtracking. It starts at a given source node, and explores as far as possible along each branch before backtracking.

The algorithm works by maintaining a stack of nodes to be visited, starting with the source node. At each step, it visits the top node on the stack and adds its unvisited neighbors to the stack. It repeats this process until there are no more nodes to visit or until the target node is found.

DFS is used in a variety of applications, including maze solving, pathfinding, and cycle detection.

