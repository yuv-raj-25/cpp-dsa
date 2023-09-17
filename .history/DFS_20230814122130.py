def dfs(graph, node, visited):
    if node not in visited:
        print(node, end=" ")  # Process the current node
        visited.add(node)     # Mark the node as visited
        
        for neighbor in graph[node]:
            dfs(graph, neighbor, visited)  # Recursively visit unvisited neighbors

# Example graph as an adjacency list
graph = {
    'A': ['B', 'C'],
    'B': ['D', 'E'],
    'C': ['F'],
    'D': [],
    'E': ['F'],
    'F': []
}

# Set to keep track of visited nodes
visited = set()
dfs(graph, 'A', visited)




