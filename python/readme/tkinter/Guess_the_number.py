import tkinter as tk
import random as rn
 
randomNumber=rn.randrange(10,100)
def random():
    label3.config(text="")
    
    global i
    
    inputNumer=int(entry1.get())
    if randomNumber==inputNumer:
        label2.config(text="Well done, you succeeded.",fg="white",bg="yellow",font=("",16))
        entry1.config(state="disabled") 
        button1.config(state="disabled")
    elif inputNumer<randomNumber:
        i+=1
        label3.config(text="The number is bigger ")   
        label2.config(text=f"error{i}",bg="red")
    else:
        i+=1
        label3.config(text="The number is smaller")   
        label2.config(text=f"error{i}",bg="red")
        
    if i==5:    
        entry1.config(state="disabled") 
        button1.config(state="disabled")
        
i=0

window =tk.Tk()
window.title("Guess_the_number")
window.geometry("500x500")

label1=tk.Label(window,text="enter the number :",fg="black")
label1.place(x=60,y=150)

entry1=tk.Entry(window)
entry1.place(x=170,y=150)

button1=tk.Button(window,text="click",bg="blue",command=random)
button1.place(x=210,y=175)

label2=tk.Label(window)
label2.place(x=100,y=260)

label3=tk.Label(window,)
label3.place(x=170,y=210)

window.mainloop()