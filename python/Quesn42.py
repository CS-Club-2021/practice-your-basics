# Vishnu Kumar
# ME20B2001
# Question 42

n=int(input("Enter the number of your choice:\n"))

x=int(n)
sum=int(0)


while(n>0):
    r=int(n%10)
    sum=sum+(r*r*r)
    n=int(n/10)

if x==sum :
    print("Entered number is an armstrong  number ") 
    
else:
    print("Entered number is not an armstrong number")