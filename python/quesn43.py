# Solved question 43
# Remove duplicates from a string.

d = {}
s=input()
res=[]
for c in s:
    if c not in d:
      res.append(c)
      d[c]=1
print ("".join(res))
