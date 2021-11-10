
import random

#create an empty list to store random values

ls=[]

# while loop to generate random numbers

i=153

while(i): # iteration stops when i == 0
    # append random number to list
    ls.append(random.randint(1,1000))
    i-=1 # decrement i value every time

# let take j variable

j = 0

print("The list of random numbers contains:")

# while loop to print

while(j<len(ls)):
    i=j
    # print 10 numbers in each line
    print("{:>10}".format(ls[i]),end="")
    j+=1 # increment j value
    #  if j is multiple of 10 the we need to go for new line
    if(j%10==0):

        # this print is for new line

        print()

