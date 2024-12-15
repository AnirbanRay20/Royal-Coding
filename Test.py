#Multi stage graph

def nprint():
  for i in range(1,n+1):
    print(i,end='\t')

def oprint(arr):
  for i in range(1,n+1):
    print(arr[i],end='\t')

stages=int(input("Enter the number of stages : "))
n=int(input("Enter the number of nodes : "))
cost = []  #cost array
dest = []  #destination array
path = []  #path determination array
cam = [] #cost adjacency matrix

print("\nEnter the cost adjacency matrix : ")
for i in range(0,n+1):
  temp = []
  #inital setup
  ''''''
  cost.append(0)
  if i!=n:
    dest.append(0)
  else:
    dest.append(n)
  path.append(0)
  ''''''
  for j in range(0,n+1):
    if i==0 or j==0 or i==j or i==n:
      temp.append(0)
    else:
      temp.append(int(input(f'Enter the value of {i},{j} index : ')))
  cam.append(temp)

print("\nThe Cost Adjacency Matrix is : ")
for i in range(1,n+1):
  for j in range(1,n+1):
    print(cam[i][j], end='\t')
  print()

for i in range(n-1,0,-1):
  min=32767
  for k in range(i+1,n+1):
    if cam[i][k]!=0 and cam[i][k]+cost[k]<min:
      min= cam[i][k]+cost[k]
      dest[i]=k
    cost[i]=min

#vertex, destination, cost matrix
print("\nVertices    : ",end='\t')
nprint()
print("\nCost        : ",end='\t')
oprint(cost)
print("\nDestination : ",end='\t')
oprint(dest)

#Setting up the path
path[1]=1
path[stages]=n
for i in range(2,stages):
  path[i]=dest[path[i-1]]

#Path printing
print("\n\nPath : ",end='\t')
for i in range(n+1):
  if path[i]!=0 and path[i]!=n:
    print(path[i],end=" -> ")
print(n)