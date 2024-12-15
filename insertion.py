#insertion array
import os
os.system('color 70')

arr = []
size = int(input("Enter the size of the array : "))
print("Enter the elements of the array")
for index in range(size):
  arr.append(int(input()))
def insertionSort(arr):
	n = len(arr) 
	if n <= 1:
		return 
	for i in range(1, n):
		key = arr[i] 
		j = i-1
		while j >= 0 and key < arr[j]: 
			arr[j+1] = arr[j]
			j -= 1
		arr[j+1] = key 

print("Unsorted list is: ",arr)
insertionSort(arr)
print("Sorted list is:",arr)