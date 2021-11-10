def double_word(word):
    double = word + word
    return double + str(len(double))

print(double_word("hello"))
print(double_word("abc"))
print(double_word(""))


name = "Jaylen"
print(name[1])
print(name[2])
print(name[0])
print(name[5])

text = "Random string with a lot of characters"
print(text[-1])
print(text[-6])
print(text[0])

def first_and_last(message):
    if len(message) == 0:
        return True
    elif message[0] == message[-1]:
        return True
    else:
        return False

print(first_and_last("else"))
print(first_and_last("tree"))
print(first_and_last(""))

color = "orange"
print(color[1:4])

fruit = "Pineapple"
print(fruit[:4])
print(fruit[4:])

message = "A kong string with a silly typo"
new_message = message[0:2] + "l" + message[3:]
print(new_message)

message = "This is a new message"
print(message)
message = "And another one"
print(message)

pets = "Cats & Dogs"
print(pets.index("&"))
print(pets.index("C"))
print(pets.index("Dog"))
print(pets.index("s"))

print("Dargons" in pets)
print("Dogs" in pets)
print("Cat" in pets)

## Function to replace the old domain with the new domain
def replace_domain(email, old_domain, new_domain):  # define domain parameters
    if "@" + old_domain in email:               # check if the concatenation of the sign @ and the old domain contained in the email
        index = email.index("@" + old_domain)   # find the index were the old domain including @ sign starts
        new_email = email[:index] + "@" + new_domain # creates the new email by adding the first portion of the old email + @ and new domain
        return new_email
    return email

print("Mountains".upper())
print("Mountains".lower())

answer = 'YES'
if answer.lower() == "yes":
    print("User said yes")

print("yes ".strip())
print(" yes ".lstrip())
print(" yes ".rstrip())

print("The number of times e occurs in this string is 4".count("e"))
print("Forest".endswith("rest"))
print("12345".isnumeric())
print("Forest".isnumeric())
print(int("12345") + int("54321")) # used to convert it into acctual numbers

print(" ".join(["This", "is", "a", "phrase", "joined", "by", "spaces"]))
print("...".join(["This", "is", "a", "phase", "joined", "by", "triple", "dots"]))

print("This is another example".split())

def intials(phrase):
    words = phrase.split()
    result = ""
    for word in words:
        result += word[0].upper()
    return result

print(intials("Universal Serial Bus"))
print(intials("local area network"))
print(intials("Operating system"))

## Formatting Strings
name = "Manny"
number = len(name) * 3
print("Hello {}, your lucky number is {}".format(name, number))
print("Your lucky number is {number}, {name}.".format(name=name, number=len(name)*3))

def student_grade(name, grade):
    return "{} received {}% on the exam".format(name, grade)

print(student_grade("Reed", 80))
print(student_grade("Paige", 92))
print(student_grade("Jesse", 85))

price = 7.5
with_tax = price * 1.09
print(price, with_tax)
print("Base price: ${:.2f}. With Tax: ${:.2f}".format(price, with_tax))

def to_celsius(x):
    return (x-32)*5/9

for x in range(0,101,10):
    print("{:>3}F | {:>6.2f} C".format(x, to_celsius(x)))

def is_palindrome(input_string):  # We'll create two strings, to compare them
    new_string = ""
    reverse_string = ""
    # Traverse through each letter of the input string
    input_string = input_string.lower()
    for x in input_string:
        # Add any non-blank letters to the end of one string, and 
        # to the front of the other string.
        if x != " ":
            new_string = new_string + x
            reverse_string = x + reverse_string

    # Compare the strings
    if new_string == reverse_string:
        return True
    return False

print(is_palindrome("Never Odd or Even"))
print(is_palindrome("abc"))
print(is_palindrome("kayak"))

def nametag(first_name, last_name):
    return("{} {}.".format(first_name, last_name[0]))

print(nametag("Jane", "Smith"))
print(nametag("Francesco", "Rinaldi"))
print(nametag("Jean-Luc", "Grand-Pierre"))
print(nametag("Chioma", "Abed-Amazu"))

def convert_distance(miles):
    km = miles*1.6
    result = "{} miles equals {:.1f} km".format(miles, km)
    return result

print(convert_distance(12))
print(convert_distance(5.5))
print(convert_distance(11))

def replace_ending(sentence, old, new):  # Check if the old string is at the end of the sentence
    if sentence.endswith(old):
        # Using i as the slicing index, combine the part
        # of the sentence up to the matched string at the end with the new string
        i = sentence.rindex(old)
        new_sentence = sentence[:i]+new
        return new_sentence
    # Return the original sentence if there is no match
    return sentence

print(replace_ending("It's raining cats and cats", "cats", "dogs"))
print(replace_ending("She sells seashells by the seashore", "seashells", "donuts"))
print(replace_ending("The weather is nice in May", "may", "april"))
print(replace_ending("The weather is nice in May", "May", "April"))

# List
x = ["Now", "we", "are", "cooking!"]
print(type(x))
print(x)
print(len(x))

print("are" in x)
print("Today" in x)
print(x[0])
print(x[3])
print(x[1:3])

def get_word(sentence, n):
    # Only proceed if n is positive
    if n > 0:
        words = sentence.split()
        # Only proceed if n is not more than the number of words
        if n <= len(words):
            return(words[n-1])
    return(" ")

print(get_word("This is a lesson about lists", 4))
print(get_word("This is a lesson about lists", -4))
print(get_word("Now we are cooking!", 1))
print(get_word("Now we are cooking!", 5))

# Modifying the Contents of a List
fruit = ["Pineapple", "Banana", "Apple", "Melon"]
fruit.append("Kiwi")
print(fruit)

fruit.insert(0, "Orange")
print(fruit)
fruit.insert(25, "Peaches")
print(fruit)
fruit.remove("Melon")
print(fruit)
fruit.pop(3)
print(fruit)
fruit[4] = "Strawberry"
print(fruit)

def skip_elements(elements):
    # Intialize variables
    new_list = []
    i = 0

    # Iterate through the list
    for element in elements:
        # Does this element belong  in the resulting list?
        if i % 2 == 0:
            # Add this element to the resulting list
            new_list.append(element)
        # Increment i
        i += 1

    return new_list

print(skip_elements(["a", "b", "c", "d", "e", "f", "g"]))
print(skip_elements(['Orange', 'Pineapple', 'Strawberry', 'Kiwi', 'Peach']))
print(skip_elements([]))

# Lists and Tuples
fullname = ('Grace', 'M', 'Hooper')

def convert_seconds(seconds):
    hours = seconds // 3600
    minutes = (seconds - hours * 3600) // 60
    remaining_seconds = seconds - hours * 3600 - minutes * 60
    return hours, minutes, remaining_seconds

result = convert_seconds(5000)
print(type(result))
print(result)
hours, minutes, seconds = convert_seconds(1000)
print(hours, minutes, seconds)

def file_size(file_info):
    file_name, file_type, size = file_info
    return("{:.2f}".format(size/1024))

print(file_size(('Class Assignment', 'docx', 17875)))
print(file_size(('Notes', 'txt', 496)))
print(file_size(('Program', 'py', 1239)))

# Iterating over Lists and Tuples
Animals = ["Lion", "Zebra", "Dolphin", "Monkey"]
chars = 0
for animal in Animals:
    chars += len(animal)

print("Total characters: {}, Average length: {}".format(chars, chars/len(Animals)))

winners = ["Ashley", "Dylan", "Reese"]
for index, person in enumerate(winners):
    print("{} - {}".format(index + 1, person))

def skip_variables(variables):
    # code goes here
    variable = []
    for i, v in enumerate(variables):
        if i % 2 == 0:
            variable.append(v)

    return variable

print(skip_variables(["a", "b", "c", "d", "e", "f", "h", "i", "v"]))
print(skip_variables(['orange', 'pineapple', 'tangrine', 'kiwi', 'peach']))

# Function that creates a new list containing one string per person including names and email
def full_emails(people):
    results = []
    for email, name in people:
        results.append("{} <{}>".format(name, email))
    return results

print(full_emails([("alex@example.com", "Alex Diego"), ("shay@example.com", "Shay Brandt")]))

# List Comprehensions
multiples = []
for x in range(1,11):    #List based on strings
    multiples.append(x*7)

print(multiples)
multiple = [x*7 for x in range(1,11)]
print(multiple)

languages = ["Python","Perl","Ruby","GO","Java","C"]
lengths = [len(language) for language in languages]
print(lengths)

z = [x for x in range(0,101) if x % 3 == 0]
print(z)

def odd_numbers(n):
    return [x for x in range(1, n+1) if x % 2 > 0]

print(odd_numbers(5))
print(odd_numbers(20))
print(odd_numbers(10))
print(odd_numbers(11))
print(odd_numbers(1))
print(odd_numbers(-1))

filenames = ["program.c", "stdio.hpp", "sample.hpp", "a.out", "math.hpp", "hpp.out"]
newfilenames = []
for names in filenames:
    if names.endswith('.hpp'):
        newfilenames.append(names[:-2])
    else:
        newfilenames.append(names)

print(newfilenames)

newfilenames = [e.replace('.hpp','.h') for e in filenames]        
print(newfilenames)