#عددی رو دریافت کرده و مقسوم علیه های آن را چاپ کند
number=input("enter the number:")
number=int(number)
m=1
while m<=number:
    k=number%m
    if k==0:
        print(m)   
    m+=1
