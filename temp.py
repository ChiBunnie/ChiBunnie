import math#input the two legs of a right triangle
side1 = float(input("Enter the length of side 1: "))
side2 = float(input("Enter the length of side 2: "))

#calculate the length of the hypotenuse
hyp = math.sqrt(side1 * side1 + side2 * side2)
#display the hypotenuse
print("The hypotenuse is", hyp)

