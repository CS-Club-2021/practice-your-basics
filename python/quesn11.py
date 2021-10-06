# Solved Question 11.
# Finding number of uppercase and lowercase letters.

a = input()
a = list(a)

u, l = 0, 0
for i in a:
    if i.isupper():
        u = u + 1
    if i.islower():
        l = l + 1
    else:
        pass

print("Upper case :", u)
print("Lower case :", l)
