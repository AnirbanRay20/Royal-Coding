# Prompt user for the number of vertices and edges
v = int(input("Enter the number of vertices: "))
e = int(input("Enter the number of edges: "))

# Initialize the adjacency list for the graph
g = [[] for _ in range(v)]

# Read edges from user input
print("Enter the edges (format: x y, where x and y are vertex indices):")
for _ in range(e):
    x, y = map(int, input().split())
    g[x].append(y)
    g[y].append(x)  # Since the graph is undirected

# Initialize color assignment and availability tracking
res = [-1] * v  # Array to store colors assigned to vertices
available = [False] * v  # Array to track available colors
res[0] = 0  # Assign color 0 to the first vertex
cn = 1  # Count of colors used

# Assign colors to remaining vertices
for i in range(1, v):
    # Reset available colors
    for j in range(v):
        available[j] = False

    # Check colors of adjacent vertices
    for neighbor in g[i]:
        if res[neighbor] != -1:
            available[res[neighbor]] = True  # Mark color as unavailable

    # Find the first available color
    cr = 0
    while cr < v and available[cr]:
        cr += 1

    res[i] = cr  # Assign the found color to the vertex
    cn = max(cn, cr + 1)  # Update the maximum color count

# Output the result
print(f"\nMinimum number of colors required: {cn}")  # Print the number of colors used
print("Color assignment for each vertex:")
for i in range(v):
    print(f"Vertex {i}: Color {res[i]}")  # Print colors assigned to each vertex