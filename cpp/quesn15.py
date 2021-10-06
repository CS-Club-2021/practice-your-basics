# Define a function that can receive two integer numbers in string form and compute their sum and then print it in console.
def sum():
	x,y=(input("Enter two integers\n")).split()
	n1=int(x)
	n2=int(y)
	s=n1+n2
	print(s)

sum()