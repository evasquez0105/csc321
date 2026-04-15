#Elmer Vasquez
#CSC 321
#Lab #12

def rectangleCalc(b, h):
    return (b * h)

def circleCalc(rad):
    return (rad * rad * 3.14)

base = int(input("Please enter the base of a rectangle: "))
height = int(input("Please enter the height of a rectangle: "))

rectangleArea = rectangleCalc(base, height)

print("The area of rectangle is: ", rectangleArea)

radius = int(input("Please enter the radius of a circle: "))

circleArea = circleCalc(radius)

print("The area of a circle is: ", circleArea)

