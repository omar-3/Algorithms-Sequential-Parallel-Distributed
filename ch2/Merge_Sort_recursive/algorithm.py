#!/bin/python3


def split(L,low,high):
    if low<high:
        mid = (low+high)//2
        split(L,low,mid)
        split(L,mid+1,high)
        merge(L,low,mid,high)
def merge(L,low,mid,high):
    first = low
    second = mid+1
    temp = []
    while (first<=mid) and (second<=high):
        if L[first]<L[second]:
            temp.append(L[first])
            first+=1
        else:
            temp.append(L[second])
            second+=1
    if first<=mid:                                  # I find it much cleaner than textbook implementation, it is exactly the same without any hacks
        temp[len(temp):]=L[first:mid+1]
    else:
        temp[len(temp):]=L[second:high+1]
    L[low:high+1]=temp


##############
L=[4,2,1,9,10,23,12,4,8,19,91,19,83,75,32,65]
split(L,0,len(L)-1) 
print(L)   
