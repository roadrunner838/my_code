#عددی رو در مبنای ده‌دهی  دریافت کرده و به مبنای دودویی تبدیل کند
number=int(input("Please enter your number"))

result=0
mod=0
base=1
while number>0:
    mod=number%2
    mod=int(mod)
    n=mod*base
    result+=n
    base*=10
    number/=2
print(result)