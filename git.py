string=input("Enter the string:")
refstring="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
sum=0
for char in refstring:
    if char not in string.upper():
        sum=1
if(sum==1):
    print("The given string is not a Pangram")
else:
    print("The given string is a Pangram")
