#عددی رو دریافت کرده و اعداد زوج کوچکتر از آن را چاپ کند
number=input("enter the number:")
number=int(number)
while number>=0:
    if number%2==0:
        print(number)
    number-=1