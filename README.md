**Spanning Tree** : A spanning tree is a subset of Graph G, which has all the vertices covered with minimum possible number of edges. Hence, a spanning tree does not have cycles and it cannot be disconnected.

**Minimum Spanning Tree** : A minimum spanning tree or minimum weight spanning tree is a subset of the edges of a connected, edge-weighted directed graph that connects all the vertices together, without any cycles and with the minimum possible total edge weight. That is, it is a spanning tree whose sum of edge weights is as small as possible.

### Prim's Algorithm
The algorithm operates by building this tree one vertex at a time, from an arbitrary starting vertex, at each step adding the cheapest possible connection from the tree to another vertex.

### Kruskal's Algorithm
- create a graph F (a set of trees), where each vertex in the graph is a separate tree
- create a set S containing all the edges in the graph
- while S is nonempty and F is not yet spanning
  - remove an edge with minimum weight from S
  - if the removed edge connects two different trees then add it to the forest F, combining two trees into a single tree


###### *Definitions used above taken from respective Wikipedia articles*
