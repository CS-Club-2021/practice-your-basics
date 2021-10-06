# Name : Himanshu
# Roll No. : CS20B1097

'''
Question 29.
Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements. 
n can be greater than d or lesser than d.
'''

#function for rotating the array left side by 1 element
def rotateByOne(arr, n):
    temp = arr[0]
    for i in range(n-1):
        arr[i] = arr[i+1]
    arr[n-1] = temp

#function for rotating the array left side by d elements
def rotate(arr, d, n):
    for i in range(d):
        rotateByOne(arr, n)

#example array
arr = [1, 2, 3, 4, 5, 6, 7]
rotate(arr, 10, 7)
print(arr)
