# Practice 1
# Functions

def countA(string):
    count = 0
    for n in string:
        n = n.upper()
        if n == 'A':
           count += 1
    return count
    
words = str(input('Enter a string: '))

Word = countA(words)

print('The number of A in this string is: ', Word)

def subTwo(string1):
    for i in range(len((string1)-1)):
        print(string1[i], string1[i+1], sep='')
        

text = str(input('Enter a word: '))

subTwo(text)

def  sumRange(num1, num2):
    sum = 0
    for n in range(num1, num2+1):
        sum += n
    return sum

print('The sum of theis range is: ', sumRange(3,6))

def ticketPrice(age):
    child = 4.0
    adult = 6.0
    senior = 8.0
    
    if age < 13:
        return child
    if 13 < age < 64:
        return adult
    else:
        return senior
    
print('Ticket price for this age is: ', ticketPrice(12))

def F_to_C(fTemp):
    cTemp = []
    for temp in fTemp:
        cTemp.append((temp-32) * (5.0/9.0))
    return cTemp

print('68 F, 72 F the equivalent of these temeprature in Celsius is: ', F_to_C([68,72]))

import random

def random100():
    num = random.randint(1, 100)
    return num

print('The random number is: ', random100())

def cube(x):
    return x*x*x

print('The cube of 10 is: ', cube(10))

def randomRange(int1, int2):
    n = random.randint(int1, int2)
    return n

print('This a random number between 100 and 200: ',  randomRange(100,200))

def starBox(n):
    for i in range(n):
        print('*', end='')
    print()
    
    for i in range(n-2):
        print('*', end='')
        for j in range(n-2):
            print(' ', end='')
        print('*')
    for i in range(n):
        print('*', end='')
    print()

starBox(5)

def wordBox(myString):
    print(myString)
    for ch in range(len(myString)-2):
        print(myString[0], end='')
        for j in range(len(myString)-2):
            print(' ', end='')
        print(myString[-1])
        
    print(myString)
    
wordBox('apple')

def sumLess(List, limit):
    sum1 = 0
    for n in List:
        if n <= limit:
            sum1 += n
    return sum1

print('The sum of the list is: ', sumLess([2,3,4,5,6,7,8,9,10],5))

def reverse(my_String):
    for i in range(len(my_String)-1, -1, -1):
        print(my_String[i], sep='', end='')
        
reverse('123458abcdef')

def factorial(number1):
    if number1 < 0:
        return 0
    print('invalid')
    
    fact = 1
    for i in range(2, number1 + 1):
        fact *= i
    return fact

print('The factorial of 10 is: ', factorial(10))

def countLetters(mystring):
    uppercount = 0
    lowercount = 0
    
    for ch in mystring:
        if ch.isupper():
            uppercount += 1
        if ch.islower():
            lowercount += 1
        
        return[uppercount, lowercount]
letters = countLetters('Today Is a Good DAY.')  
print('There are',letters[0],'uppercase letters and' , end='')
print(letters[1],'lowercase letters in string.')
print()

def pangram(mystring1):
    letter = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    for ch in letter:
        if ch not in mystring1.upper():
            return False
    return True

sTRING = input('Enter a string: ')

if pangram(sTRING):
    print(sTRING, 'is a pangram.\'')
else:
    print(sTRING, 'is not a pangram \\')
    
    

def countWords(word):
    return len(word.split())

sent = countWords('hello')
sent1 = countWords('Today is good')
print(sent)
print(sent1)

List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{} {:>30s}'.format(List[i], job))
    elif domain == 'com':
        print('{} {:>30s}'.format(List[i], job))
    elif domain == 'edu':
        print('{} {:>30s}'.format(List[i], school))
    else:
        print('{} {:>30s}'.format(List[i], others))
        