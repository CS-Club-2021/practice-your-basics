# Solved question number 10.
# Calculating the number of letters and digits.

a = input()
b={"DIGITS":0, "LETTERS":0}
for c in a:
    if c.isdigit():
        b["DIGITS"]+=1
    elif c.isalpha():
        b["LETTERS"]+=1
    else:
        pass
print ("LETTERS : ", b["LETTERS"])

print ("DIGITS : ", b["DIGITS"])
