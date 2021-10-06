#Name: Yash Agrawal
#Roll: EC20B1059
#Question 9

'''
Write a program, which will find all such numbers between 1000 and 3000 (both included) such that 
each digit of the number is an even number.The numbers obtained should be printed in a comma-separated 
sequence on a single line.
'''

all_numbers = []

for number in range(1000, 3001):
    num_string = str(number)
    if (int(num_string[0])%2 == 0) and (int(num_string[1])%2 == 0) and (int(num_string[2])%2 == 0) and (int(num_string[3])%2 == 0):
        all_numbers.append(num_string)

print(",".join(all_numbers))
