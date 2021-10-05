# Varun Talari - EC20B1041
# Question number: 10
# Language: Python

'''
Write a program that accepts a sentence and calculate the number of letters and digits
'''

def letters_and_digits():
    sentence = input('Enter a sentence: ')
    
    digits_count=0
    letters_count=0

    for i in range(len(sentence)):
        if sentence[i].isdigit():
            digits_count+=1
        elif sentence[i].isalpha():
            letters_count+=1
    print("Number of letters: %d \nNumber of digits: %d" %(digits_count,letters_count))

letters_and_digits()
