# c_2
Second assignment in Software Systems 1 course in Ariel University.  
This assignment was mostly about finding the shortest path between two vertices in a graph (the graph is represented by a matrix).  

## Methods
- create_mat - creating a matrix that represents the graph.
- shortest_path - finds the shortest path between two vertices. Return -1 if there is no such path.
- is_path - prints "True" if there is a path between two given vertices, else, prints "False".

For these methods I used Floyd-Warshall algorithm [O(|V|^3)]. You can read about it in the following link: https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm
