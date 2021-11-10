    if domain == 'biz':
        print(List[i] +'\t\t' + job, end=' ')
    elif domain == 'com':
        print(List[i] +'\t\t' + job, end=' ')
    elif domain == 'edu':
        print(List[i] +'\t\t' + school, end=' ')
    else:
        print(List[i] +'\t\t' + others, end=' ')
        
runfile('C:/Users/abeda/.spyder-py3/Exam2_practice.py', wdir='C:/Users/abeda/.spyder-py3')
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'\t\t' + job, end=' ')
    elif domain == 'com':
        print(List[i] +'\t\t' + job, end=' ')
    elif domain == 'edu':
        print(List[i] +'\t\t' + school, end=' ')
    else:
        print(List[i] +'\t\t' + others, end=' ')
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'\t\t' + job)
    elif domain == 'com':
        print(List[i] +'\t\t' + job)
    elif domain == 'edu':
        print(List[i] +'\t\t' + school)
    else:
        print(List[i] +'\t\t' + others)
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:-8d}' + job)
    elif domain == 'com':
        print(List[i] +'{:-8d}' + job)
    elif domain == 'edu':
        print(List[i] +'{:-8d}' + school)
    else:
        print(List[i] +'{:-8d}' + others)
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:-8d}' + job.format())
    elif domain == 'com':
        print(List[i] +'{:-8d}' + job.format())
    elif domain == 'edu':
        print(List[i] +'{:-8d}' + school.format())
    else:
        print(List[i] +'{:-8d}' + others.format())
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:-8d}' + job.format(5))
    elif domain == 'com':
        print(List[i] +'{:-8d}' + job.format(5))
    elif domain == 'edu':
        print(List[i] +'{:-8d}' + school.format(5))
    else:
        print(List[i] +'{:-8d}' + others.format(5))'
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:-8d}' + job.format(5))
    elif domain == 'com':
        print(List[i] +'{:-8d}' + job.format(5))
    elif domain == 'edu':
        print(List[i] +'{:-8d}' + school.format(5))
    else:
        print(List[i] +'{:-8d}' + others.format(5))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:-8d}'.format(5) + job)
    elif domain == 'com':
        print(List[i] +'{:-8d}'.format(5) + job)
    elif domain == 'edu':
        print(List[i] +'{:-8d}'.format(5) + school)
    else:
        print(List[i] +'{:-8d}'.format(5) + others)
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:-8d}'.format() + job)
    elif domain == 'com':
        print(List[i] +'{:-8d}'.format() + job)
    elif domain == 'edu':
        print(List[i] +'{:-8d}'.format() + school)
    else:
        print(List[i] +'{:-8d}'.format() + others)
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:2s}'.format(' ') + job)
    elif domain == 'com':
        print(List[i] +'{:2s}'.format(' ') + job)
    elif domain == 'edu':
        print(List[i] +'{:2s}'.format(' ') + school)
    else:
        print(List[i] +'{:2s}'.format(' ') + others)
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:8s}'.format(' ') + job)
    elif domain == 'com':
        print(List[i] +'{:8s}'.format(' ') + job)
    elif domain == 'edu':
        print(List[i] +'{:8s}'.format(' ') + school)
    else:
        print(List[i] +'{:8s}'.format(' ') + others)
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:8s}'.format(job) + job)
    elif domain == 'com':
        print(List[i] +'{:8s}'.format(' ') + job)
    elif domain == 'edu':
        print(List[i] +'{:8s}'.format(' ') + school)
    else:
        print(List[i] +'{:8s}'.format(' ') + others)
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:8s}'.format(job) + job)
    elif domain == 'com':
        print(List[i] +'{:8s}'.format(job) + job)
    elif domain == 'edu':
        print(List[i] +'{:8s}'.format(school) + school)
    else:
        print(List[i] +'{:8s}'.format(others) + others)
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:8s}'.format(job))
    elif domain == 'com':
        print(List[i] +'{:8s}'.format(job))
    elif domain == 'edu':
        print(List[i] +'{:8s}'.format(school))
    else:
        print(List[i] +'{:8s}'.format(others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:-8s}'.format(job))
    elif domain == 'com':
        print(List[i] +'{:-8s}'.format(job))
    elif domain == 'edu':
        print(List[i] +'{:-8s}'.format(school))
    else:
        print(List[i] +'{:-8s}'.format(others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:>8s}'.format(job))
    elif domain == 'com':
        print(List[i] +'{:>8s}'.format(job))
    elif domain == 'edu':
        print(List[i] +'{:>8s}'.format(school))
    else:
        print(List[i] +'{:>8s}'.format(others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print(List[i] +'{:<8s}'.format(job))
    elif domain == 'com':
        print(List[i] +'{:<8s}'.format(job))
    elif domain == 'edu':
        print(List[i] +'{:<8s}'.format(school))
    else:
        print(List[i] +'{:<8s}'.format(others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{List[i] <{:<8s}'.format(job))
    elif domain == 'com':
        print(List[i] +'{:<8s}'.format(job))
    elif domain == 'edu':
        print(List[i] +'{:<8s}'.format(school))
    else:
        print(List[i] +'{:<8s}'.format(others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{List[i] <:<8s}'.format(job))
    elif domain == 'com':
        print(List[i] +'{:<8s}'.format(job))
    elif domain == 'edu':
        print(List[i] +'{:<8s}'.format(school))
    else:
        print(List[i] +'{:<8s}'.format(others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{List[i]:<8s}'.format(job))
    elif domain == 'com':
        print(List[i] +'{:<8s}'.format(job))
    elif domain == 'edu':
        print(List[i] +'{:<8s}'.format(school))
    else:
        print(List[i] +'{:<8s}'.format(others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{} {:<8s}'.format(List[i], job))
    elif domain == 'com':
        print(List[i] +'{:<8s}'.format(job))
    elif domain == 'edu':
        print(List[i] +'{:<8s}'.format(school))
    else:
        print(List[i] +'{:<8s}'.format(others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{} {:8s}'.format(List[i], job))
    elif domain == 'com':
        print(List[i] +'{:<8s}'.format(job))
    elif domain == 'edu':
        print(List[i] +'{:<8s}'.format(school))
    else:
        print(List[i] +'{:<8s}'.format(others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{} {:30s}'.format(List[i], job))
    elif domain == 'com':
        print('{} {:30s}'.format(List[i], job))
    elif domain == 'edu':
        print('{} {:30s}'.format(List[i], school))
    else:
        print('{} {:30s}'.format(List[i], others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{} {}'.format(List[i], job))
    elif domain == 'com':
        print('{} {:30s}'.format(List[i], job))
    elif domain == 'edu':
        print('{} {:30s}'.format(List[i], school))
    else:
        print('{} {:30s}'.format(List[i], others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{} {:>30}'.format(List[i], job))
    elif domain == 'com':
        print('{} {:>30s}'.format(List[i], job))
    elif domain == 'edu':
        print('{} {:>30s}'.format(List[i], school))
    else:
        print('{} {:>30s}'.format(List[i], others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{<:15} {:>30}'.format(List[i], job))
    elif domain == 'com':
        print('{<:15} {:>30s}'.format(List[i], job))
    elif domain == 'edu':
        print('{} {:>30s}'.format(List[i], school))
    else:
        print('{} {:>30s}'.format(List[i], others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{>:15} {:<15s}'.format(List[i], job))
    elif domain == 'com':
        print('{>:15} {:<15s}'.format(List[i], job))
    elif domain == 'edu':
        print('{} {:>30s}'.format(List[i], school))
    else:
        print('{} {:>30s}'.format(List[i], others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{:15} {:<15s}'.format(List[i], job))
    elif domain == 'com':
        print('{:15} {:<15s}'.format(List[i], job))
    elif domain == 'edu':
        print('{} {:>30s}'.format(List[i], school))
    else:
        print('{} {:>30s}'.format(List[i], others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{:15} {:<15s}'.format(List[i], job))
    elif domain == 'com':
        print('{:15} {:<15s}'.format(List[i], job))
    elif domain == 'edu':
        print('{} {:<30s}'.format(List[i], school))
    else:
        print('{} {:>30s}'.format(List[i], others))
        
List = ['www.amazon.com','www,nasa.org','www.unm.edu','www.canon.biz']
job = 'Business'
school = 'Eductaion'
others = 'other'

for i in range(len(List)):
    domain = List[i].split('.')[-1]
    if domain == 'biz':
        print('{} {:<30s}'.format(List[i], job))
    elif domain == 'com':
        print('{} {:<30s}'.format(List[i], job))
    elif domain == 'edu':
        print('{} {:<30s}'.format(List[i], school))
    else:
        print('{} {:<30s}'.format(List[i], others))
        
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
        
runcell(0, 'C:/Users/abeda/.spyder-py3/stringFunctions.py')
def remove_punc(s):
    my_list = []
    for ch in s:
        if ch.isalnum() or ch.isspace:
            my_list.append(ch)
    return my_list


myString = input('Type something with punctuation: ')
newString = remove_punc(myString)
print('Here is the string without punctuation: ', newString)
def remove_punc(s):
    my_list = []
    for ch in s:
        if ch.isalnum() or ch.isspace:
            my_list += ch
    return my_list


myString = input('Type something with punctuation: ')
newString = remove_punc(myString)
print('Here is the string without punctuation: ', newString)
def remove_punc(s):
    my_list = ''
    for ch in s:
        if ch.isalnum() or ch.isspace:
            my_list += ch
    return my_list


myString = input('Type something with punctuation: ')
newString = remove_punc(myString)
print('Here is the string without punctuation: ', newString)
def remove_punc(s):
    my_list = ''
    for ch in s:
        if (ch.isalnum() or ch.isspace()):
            my_list += ch
    return my_list


myString = input('Type something with punctuation: ')
newString = remove_punc(myString)
print('Here is the string without punctuation: ', newString)
runcell(0, 'C:/Users/abeda/.spyder-py3/stringFunctions.py')
def word_count(s):
    return(len(s.split()))
 
   
print('Testing Function #2')
myWord = str(inpu('Enter a word(s): '))
num_Words = word_count(myWord)
print('The number of words in this sentence is/are: ', num_Words)
def word_count(s):
    return(len(s.split()))
 
   
print('Testing Function #2')
myWord = str(input('Enter a word(s): '))
num_Words = word_count(myWord)
print('The number of words in this sentence is/are: ', num_Words)
runcell(0, 'C:/Users/abeda/.spyder-py3/stringFunctions.py')
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
        word_list.append(s.lower())

print('Testing Function #3')
    string = str(input('Enter a word or string: '))
    my_List = []
    w = str(input('Enter words for the string'))
    for i in my_List:
        my_List.append(w)
        w = str(input('Enter words for the string'))
    
    print(add_unique(string, my_List))
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
    string = str(input('Enter a word or string: '))
    my_List = []
    w = str(input('Enter words for the string'))
    for i in my_List:
        my_List.append(w)
        w = str(input('Enter words for the string'))
    
    print(add_unique(string, my_List))
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = []
w = str(input('Enter words for the string'))
for i in my_List:
    my_List.append(w)
    w = str(input('Enter words for the string'))
    
print(add_unique(string, my_List))
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = []
w = str(input('Enter words for the string: '))
for i in my_List:
    my_List.append(w)
    w = str(input('Enter words for the string'))
    
print(add_unique(string, my_List))
my_List
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','Chioma;'] 
print(add_unique(string, my_List))
my_List
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','Chioma;'] 
print(add_unique(string, my_List))
my_List
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','Chioma;'] 
print(add_unique(string, my_List))
my_List
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','chioma;'] 
print(add_unique(string, my_List))
my_List
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())
        else:
            break

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','chioma;'] 
print(add_unique(string, my_List))
my_List
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())
        else:
            word_list

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','chioma;'] 
print(add_unique(string, my_List))
my_List
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())
        else:
            print(word_list)

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','chioma;'] 
print(add_unique(string, my_List))
my_List
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            print(word_list.append(s.lower()))
    
        else:
            print(word_list)

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','chioma;'] 
add_unique(string, my_List)
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','chioma;'] 
add_unique(string, my_List)
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
string = str(input('Enter a word or string: '))
my_List = ['Hello', 'My','Name','is','chioma;'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(s.lower())

print('Testing Function #3')
string = 'Hello my name is chioma abed'
my_List = ['Hello', 'My','Name','is','chioma;'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch.lower() not in word_list:
            word_list.append(ch.lower())

print('Testing Function #3')
string = 'Hello my name is chioma abed'
my_List = ['Hello', 'My','Name','is','chioma;'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch.lower() not in word_list:
            word_list.append(ch.lower())

print('Testing Function #3')
string = 'Hello my name is chioma abed'
my_List = ['hello', 'my','name','is','chioma;'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch.lower() not in word_list:
            word_list.append(ch.lower())

print('Testing Function #3')
string = 'Hello my name is Chioma abed'
my_List = ['hello', 'my','name','is','chioma;'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch.lower() not in word_list:
            word_list.append(ch.lower())

print('Testing Function #3')
string = 'Hello my name is Chioma abed'
my_List = ['hello', 'my','name','is','chioma'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    
    for ch in s.split():
        if ch not in word_list:
            word_list.append(ch.lower())

print('Testing Function #3')
string = 'Hello my name is Chioma abed'
my_List = ['hello', 'my','name','is','chioma'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    s = ''
    for ch in s.split():
        if ch not in word_list:
            word_list.append(ch.lower())

print('Testing Function #3')
string = 'Hello my name is Chioma abed'
my_List = ['hello', 'my','name','is','chioma'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    for ch in s.split():
        if ch not in word_list:
            word_list.append(ch.lower())

print('Testing Function #3')
string = 'Hello my name is Chioma abed'
my_List = ['hello', 'my','name','is','chioma'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    s = ''
    for ch in s.split():
        if ch.lower() not in word_list:
            word_list.append(ch.lower())

print('Testing Function #3')
string = 'Hello my name is Chioma abed'
my_List = ['hello', 'my','name','is','chioma'] 
add_unique(string, my_List)
print(my_List)
def add_unique(s, word_list):
    for ch in s.split():
        if ch.lower() not in word_list:
            word_list.append(ch.lower())

print('Testing Function #3')
string = 'Hello my name is Chioma abed'
my_List = ['hello', 'my','name','is','chioma'] 
add_unique(string, my_List)
print(my_List)
def word_count(s):
    return(len(s.split()))
    
def word_count(s):
    return(len(s.split()))
    
print('Testing Function #2')
    myWord = str(input('Enter a word(s): '))
    num_Words = word_count(myWord)
    print('The number of words in this sentence is/are: ', num_Words) 
def word_count(s):
    return(len(s.split()))
    
print('Testing Function #2')
myWord = str(input('Enter a word(s): '))
num_Words = word_count(myWord)
print('The number of words in this sentence is/are: ', num_Words)
def main():                            
    print('Testing Function #1')
    myString = input('Type something with punctuation: ')
    newString = remove_punc(myString)
    print('Here is the string without punctuation: ', newString)        
            

    print('Testing Function #2')
    myWord = str(input('Enter a word(s): '))
    num_Words = word_count(myWord)
    print('The number of words in this sentence is/are: ', num_Words)
    
if _name_ == '_main_':
    # calls the main function
    main()
    
runfile('C:/Users/abeda/.spyder-py3/stringFunctions.py', wdir='C:/Users/abeda/.spyder-py3')
runfile('C:/Users/abeda/.spyder-py3/stringFunctions.py', wdir='C:/Users/abeda/.spyder-py3')
w = str(input('Enter words for the string:'))
    my_List = []
    for i in my_List:
        my_List.append(w)
        w = str(input('Enter words for the string:'))
w = str(input('Enter words for the string:'))
my_List = []
    for i in my_List:
        my_List.append(w)
        w = str(input('Enter words for the string:'))
w = str(input('Enter words for the string:'))
my_List = []
for i in my_List:
        my_List.append(w)
        w = str(input('Enter words for the string:'))
print(my_List)
w = str(input('Enter words for the string:'))
my_List = []
while i <= 12:
        my_List.append(w)
        w = str(input('Enter words for the string:'))
print(my_List)
w = str(input('Enter words for the string:'))
my_List = []
for i in range(len(w)):
        my_List.append(w)
print(my_List)
w = str(input('Enter words for the string:'))
my_List = []
i = 0
while i <= w:
        my_List.append(w)
print(my_List)
w = str(input('Enter words for the string:'))
my_List = []
i = 0
while i <= len(w):
        my_List.append(w)
print(my_List)
w = str(input('Enter words for the string:'))
my_List = []
i = 0
while i <= len(w):
        my_List.append(i)
print(my_List)
w = str(input('Enter words for the string: '))
my_List = []
i = 0
for i in w:
        my_List.append(i)
print(my_List)
w = str(input('Enter words for the string: '))
my_List = []
i = 0
for i in w.split:
        my_List.append(i)
print(my_List)
w = str(input('Enter words for the string: '))
my_List = []
i = 0
for i in w.split():
        my_List.append(i)
print(my_List)
w = str(input('Enter words for the string: '))
my_List = []
for i in w.split():
        my_List.append(i)
print(my_List)
def add_unique(s, word_list):
    # iterates around the string after spliting it
    for ch in s.split():
        # checks if the lowercase version of the word in the string 
        # is not in the list 
        if ch.lower() not in word_list:
            # adds the lowercase version of the word to the list
            word_list.append(ch.lower())
string = input('Enter a word or string: ')
w = str(input('Enter words for the string:'))
my_List = []
for i in w.split():
    my_List.append(i)
    
add_unique(string, my_List)
print(my_List)
print s
def add_unique(s, word_list):
    # iterates around the string after spliting it
    for ch in s.split():
        # checks if the lowercase version of the word in the string 
        # is not in the list 
        if ch.lower() not in word_list:
            # adds the lowercase version of the word to the list
            word_list.append(ch.lower())
string = input('Enter a word or string: ')
w = str(input('Enter words for the string:'))
my_List = []
for i in w.split():
    my_List.append(i)
    
add_unique(string, my_List)
print(my_List)
runfile('C:/Users/abeda/.spyder-py3/stringFunctions.py', wdir='C:/Users/abeda/.spyder-py3')

## ---(Tue Oct 26 15:23:42 2021)---
runcell(0, 'C:/Users/abeda/.spyder-py3/pa8.py')
runfile('C:/Users/abeda/.spyder-py3/pa8.py', wdir='C:/Users/abeda/.spyder-py3')
runcell(0, 'C:/Users/abeda/.spyder-py3/pa8.py')
runfile('C:/Users/abeda/.spyder-py3/pa8.py', wdir='C:/Users/abeda/.spyder-py3')

## ---(Thu Oct 28 16:33:36 2021)---
runfile('C:/Users/abeda/.spyder-py3/pa8.py', wdir='C:/Users/abeda/.spyder-py3')

## ---(Thu Nov  4 10:55:19 2021)---
runfile('C:/Users/abeda/.spyder-py3/pa9a.py', wdir='C:/Users/abeda/.spyder-py3')
runfile('C:/Users/abeda/.spyder-py3/pa9a.py', wdir='C:/Users/abeda/.spyder-py3')
runfile('C:/Users/abeda/.spyder-py3/pa9b.py', wdir='C:/Users/abeda/.spyder-py3')
runfile('C:/Users/abeda/.spyder-py3/pa9a.py', wdir='C:/Users/abeda/.spyder-py3')
runcell(0, 'C:/Users/abeda/.spyder-py3/pa9b.py')
runfile('C:/Users/abeda/.spyder-py3/pa9b.py', wdir='C:/Users/abeda/.spyder-py3')
runfile('C:/Users/abeda/.spyder-py3/pa9b.py', wdir='C:/Users/abeda/.spyder-py3')
runfile('C:/Users/abeda/.spyder-py3/pa9a.py', wdir='C:/Users/abeda/.spyder-py3')
runfile('C:/Users/abeda/.spyder-py3/pa9b.py', wdir='C:/Users/abeda/.spyder-py3')
runcell(0, 'C:/Users/abeda/.spyder-py3/pa9b.py')
runfile('C:/Users/abeda/.spyder-py3/pa9b.py', wdir='C:/Users/abeda/.spyder-py3')

## ---(Thu Nov  4 22:57:55 2021)---
runfile('C:/Users/abeda/.spyder-py3/pa9b.py', wdir='C:/Users/abeda/.spyder-py3')
runfile('C:/Users/abeda/.spyder-py3/pa9b.py', wdir='C:/Users/abeda/.spyder-py3')

## ---(Thu Nov  4 23:00:48 2021)---
runfile('C:/Users/abeda/.spyder-py3/pa9b.py', wdir='C:/Users/abeda/.spyder-py3')