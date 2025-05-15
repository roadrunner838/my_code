#دو عدد رو دریافت کرده و مقسوم علیه مشترک شأن را چاپ کند.
number1=int(input("enter the number:"))
number2=int(input("enter the number:"))
if number1<number2:
     smaler=number1
else:
     smaler=number2
m1=1
while m1<smaler:
    k=smaler%m1
    z=smaler%m1
    if k==0 and z==0:
         print(m1)
    m1+=1
    