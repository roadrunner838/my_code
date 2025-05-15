#عددی رو دریافت کرده و اعداد زوج کوچکتر از آن را چاپ کند
number=input("enter the numbr:")
number=int(number)
n=2         #شروع از اولین عدد  
while n<number:
    isPrime=True
    i=2
    while i*i<=n:    #برسی مقسوم علیه تا جزر
        if n%i==0:   
            isPrime=False
            break  
               
                  
        i+=1   
    if isPrime:    
        print(n)     
    n+=1
         
         