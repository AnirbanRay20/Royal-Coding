#0/1 Knapsack 

def Reverse(arr):
    new_list=arr[::-1]
    return new_list

def orprint(arr):  #Printing for whole items
    for i in range(size):
        print(arr[i],end='\t')

def sprint(arr):  #Printing for Knapsack
    for i in range(count):
        print(arr[i],end='\t')


size=int(input("Enter the number of total number of elements : "))
profit = []
weight = []
item_no = []

for i in range(size):
    item_no.append(i+1)
    profit.append(int(input(f'Enter the prize of the {i+1} numbered item : ')))
    weight.append(int(input(f'Enter the weight of the {i+1} numbered item : ')))

p_by_w = []
#Storing the profit by weight ratio
for i in range(size):
    p_by_w.append(round((profit[i]/weight[i]),2))

capacity=int(input("\nEnter the Maximum capacity of the Knapsack : "))
max_profit=0

print("\nOriginal Tray : ")
print("Item          :  ",end='')
orprint(item_no)
print("\nProfit        :  ",end='')
orprint(profit)
print("\nWeight        :  ",end='')
orprint(weight)
print("\nProfit/Weight :  ",end='')
orprint(p_by_w)

#Doing selection sort in ascending order of p_by_w
#and swaping each elements corresponding to the original tray
for i in range(size-1):
    min=i

    for j in range(i+1,size):
        if p_by_w[min] > p_by_w[j]:
            min = j

    p_by_w[i], p_by_w[min]  = p_by_w[min], p_by_w[i]
    item_no[i], item_no[min] = item_no[min], item_no[i]
    profit[i], profit[min] = profit[min], profit[i]
    weight[i], weight[min] = weight[min], weight[i]

print("\n\nSorted Tray : ")
sort_item_no=Reverse(item_no)
sort_profit=Reverse(profit)
sort_weight=Reverse(weight)
sort_p_by_w=Reverse(p_by_w)
print("Item          :  ",end='')
orprint(sort_item_no)
print("\nProfit        :  ",end='')
orprint(sort_profit)
print("\nWeight        :  ",end='')
orprint(sort_weight)
print("\nProfit/Weight :  ",end='')
orprint(sort_p_by_w)

enter_item_no = []
enter_profit = []
enter_weight = []
count=0

#Fractional Knapsacking
for i in range(size):
    if capacity>=sort_weight[i]:
        capacity=capacity-sort_weight[i]
        max_profit+=sort_profit[i]
        enter_item_no.append(sort_item_no[i])
        enter_profit.append(sort_profit[i])
        enter_weight.append(sort_weight[i])
        count+=1


    elif capacity<sort_weight[i]:
        i+=1

    if capacity<=0:
        break


print("\n\nFractional Knapsacking : ")
print("Item          :  ",end='')
sprint(enter_item_no)
print("\nProfit        :  ",end='')
sprint(enter_profit)
print("\nWeight        :  ",end='')
sprint(enter_weight)

print("\n\nMaximum Profit : ",max_profit)