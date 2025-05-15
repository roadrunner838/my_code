number1=int(input("enter the number:"))
number2=int(input("enter the number:"))
Option=int(input("Please enter the option Option 1 Even number Option 2 Odd number:"))
if number1<number2:
    smaler=number1
    big=number2
else:
    smaler=number2
    big=number1

while Option==1:
    while smaler<=big:
        if smaler%2==0:
            print(smaler)
        smaler+=1
while Option==2:
    while smaler<=big:
        if smaler%2!=0:
            print(smaler)
        smaler+=1

