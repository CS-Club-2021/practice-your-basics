# solving question 4.
# printing sequence of words after sorting them alphabetically.

items = input("Input words seperated by a comma : ")
words = [word for word in items.split(",")]
print(",".join(sorted(list(set(words)))))
