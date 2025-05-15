#عدادی عدد از کاربر دریافت کرده و بزرگترین و مجموع  آنها را چاپ کند
sum=0
max=0
while True:
    number=int(input("Please enter your number. If you want to end, enter 0:"))
    if number==0:
        break
    sum+=number
    if number>max:
        max=number
print(f"plural={sum}")
print(f"max={max}")

   
    