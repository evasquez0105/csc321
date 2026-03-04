#Elmer Vasquez
#Lab #7

x = 7;

userinput = input("Choose a number between 0 and 9: ")
y = int(userinput)

if (y < x):
    print("Your guess is less than x.")
elif (x > y):
    print("Your guess is more than x.")

if (y == x):
    print("You win! 7 was the right number!")
else:
    print("Your guess was incorrect. You lose.")

for i in range(8):
    print("Why was 6 afraid of 7? Cause 7 8 9.", i)

z = 5

while (z > 0):
    print("My favorite food is Hamburgers - ", z)
    z = z - 1
