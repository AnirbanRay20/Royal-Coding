#Farctional Knapscack

n = 5   #no. of item
p = [5, 4, 1, 3, 2]  #PROFIT
w = [10, 20, 30, 15, 5]  #WEIGHT
W = 10  #capacity
cur_w = W  #current cpacity
tot_v = 0
used = [0] * 10
for i in range(n):
    used[i] = 0
    
while cur_w > 0:
    maxi = -1
    for i in range(n):
        if (used[i] == 0) and ((maxi == -1) or ((w[i] / p[i]) > (w[maxi] / p[maxi]))):
            maxi = i
    used[maxi] = 1
    cur_w -= p[maxi]
    tot_v += w[maxi]
    if cur_w >= 0:
        print(f"Added object {maxi + 1} ({w[maxi]}, {p[maxi]}) completely in the bag. Space left: {cur_w}.")
    else:
        percent_added = int((1 + (cur_w / p[maxi])) * 100)
        print(f"Added {percent_added}% ({w[maxi]}, {p[maxi]}) of object {maxi + 1} in the bag.")
        tot_v -= w[maxi]
        tot_v += (1 + (cur_w / p[maxi])) * w[maxi]

print(f"Filled the bag with objects worth {tot_v:.2f}.")