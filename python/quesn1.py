#Name: Yash Agrawal
#Roll: EC20B1059
#Question 1

'''
Write a program which will find all such numbers which are divisible by 7 but are not a multiple of 5, 
between 2000 and 3200 (both included).The numbers obtained should be printed in a comma-separated sequence 
on a single line.
'''
all_numbers=[]
for number in range(2000, 3201):
    if number %7 == 0 and number %5 != 0:
        all_numbers.append(str(number))

print(','.join(all_numbers))
