# https://codeforces.com/problemset/problem/1973/A
import math

num_test = int(input())


for i in range(num_test):
    p1,p2,p3 = map(int,input().split())

    maxPQ = []
    if p1>0:
        maxPQ.append(p1)
    if p2>0:
        maxPQ.append(p2)
    if p3>0:
        maxPQ.append(p3)

    while(len(maxPQ)>1):
        first = maxPQ
    


# https://codeforces.com/problemset/problem/1954/A
# https://codeforces.com/problemset/problem/1951/A