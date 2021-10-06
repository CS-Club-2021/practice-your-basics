# Question 21
# Given two sorted arrays, the task is to merge them in a sorted manner.

arr1 = list(map(int , input().split()))
arr2 = list(map(int , input().split()))
new_arr = []

i = 0
j = 0

while(i < len(arr1) and j < len(arr2)):
    if(arr1[i] > arr2[j]):
        new_arr.append(arr2[j])
        j += 1
    else:
        new_arr.append(arr1[i])
        i += 1

while(i < len(arr1)):
    new_arr.append(arr1[i])
    i += 1

while(j < len(arr2)):
    new_arr.append(arr2[j])
    j += 1
    

print(new_arr)
