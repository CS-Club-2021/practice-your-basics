#Name: Yash Agrawal
#Roll: EC20B1059
#Question 2

'''
Write a program which can compute the factorial of a given numbers.
The results should be printed in a comma-separated sequence on a single line.
Suppose the following input is supplied to the program: 8 Then, the output should be:40320
'''

def factorial(number):
    if number == 0:
        return 1
    else:
        return (number * factorial(number-1))

print(factorial(8))
