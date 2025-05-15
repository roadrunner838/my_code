n=True
while n:
    number=input("enter the number:")
    number=int(number)
    if number<10:
        n=True
        print("Please enter the number again.")
    else:
        n=False

while number>=10:
    if number%2==0:
        print(number)
    number-=1