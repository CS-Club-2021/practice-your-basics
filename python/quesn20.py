#Name: Yash Agrawal
#Roll: EC20B1059
#Question 20

'''
You are given a list of n-1 integers and these integers are in the range of 1 to n.
There are no duplicates in the list. One of the integers is missing in the list. 
Write an efficient code to find the missing integer.
'''

def find_missing_number(passed_list):
    passed_list_len = len(passed_list)
    passed_list_sum = sum(passed_list)
    #total_sum = sum of first n integers
    total_sum = (passed_list_len + 1)*(passed_list_len + 2) / 2
    return (total_sum - passed_list_sum)

#Example Problem
a = [1,3,4,5,6,7]
print(find_missing_number(a))
