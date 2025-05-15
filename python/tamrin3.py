#عددی رو دریافت کرده و تشخیص دهد عدد اول هست یا نه؟
number=input("enter the numbr:")
number=int(number)
isTheFirst=True
i=2
if number<2:# عداد کوچکتر از 2 اول نیستن
    isTheFirst=False
else:
    while i*i<=number:
        if number%i==0:
            isTheFirst=False
            break
        i+=1
if isTheFirst==True:
    print("is a prime number")
else:
    print("is a not prime number")
