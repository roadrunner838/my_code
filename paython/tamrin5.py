number=input("enter the numbr:")
number=int(number)
n=2
while n<number:
    isPrime=True
    i=2
    while i*i<=n:
        if n%i==0:   
            isPrime=False
            break  
               
                  
        i+=1   
    if isPrime:    
        print(n)     
    n+=1
         
         