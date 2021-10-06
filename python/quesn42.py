# Varun Talari - EC20B1041
# Question number: 42
# Language: Python

'''
Write a program to check if a number entered is an Armstrong Number
'''


def check_armstrong(number):
    sum_reqd = number
    sum_now = 0
    numofdigits = count_digits(number)

    for i in range(numofdigits):
        t = number % 10
        sum_now = sum_now + t**numofdigits
        number = int(number/10)

    if sum_now == sum_reqd:
        print("Yes, it is an Armstrong Number ")
    else:
        print("No, it is not an Armstrong Number ")


def count_digits(number):
    n = len(str(number))
    return n


number = int(input('Enter a number: '))
check_armstrong(number)
