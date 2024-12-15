#merge Sort
import os
os.system('color 70')

array = []
size = int(input("Enter the size of the array : "))
print("Enter the elements of the array")
for index in range(size):
  array.append(int(input()))

def merge_sort(array):
  if len(array)<=1:
    return array
  mid=len(array)//2
  l=array[:mid]
  R=array[mid:]

  l=merge_sort(l)
  R=merge_sort(R)
  return merge(l,R)

def merge(left,right):
  output=[]
  i,j=0,0
  while i<len(left) and j<len(right):
    if left[i]<right[j]:
      output.append(left[i])
      i+=1
    else:
      output.append(right[j])
      j+=1

  output.extend(left[i:])
  output.extend(right[j:])
  return output

sorted_array=merge_sort(array)
print("Sorted array is:",sorted_array)

