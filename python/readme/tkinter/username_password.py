import tkinter as tk


def loginAdmin():
    mydict={
       "Username":"yasin" ,
       "password":"12345678"
    }
    label_pas.config(text="")
    label_uname.config(text="")
    
    uname=str(Username.get())
    pas=str(password.get() )
    if mydict["password"]!=pas and  mydict["Username"]==uname:
        return label_pas.config(text="Password is wrong",bg="white",fg="red",width=30)
    elif mydict["password"]!=pas and mydict["Username"]!=uname:
        return label_uname.config(text="Please check your username and password.",bg="white",fg="red",width=50)
        
    else:
        new_window =tk.Toplevel(root )
        new_window.title("yasin")
        new_window.geometry("800x900")
        new_window.configure(bg="black")
        label_wellcom1= tk.Label(new_window,text="wellcome",fg="white",bg="yellow",width=50,font=("",24))
        label_wellcom1.place(x=100,y=90)

        

root= tk.Tk()
root.geometry("800x900")
root.title("yasin")
root.configure(bg="black")


label_1=tk.Label(root,text="enter the username  :",fg="white",bg="black")
label_1.place(x=200,y=250)


Username=tk.Entry(root,width=30)
Username.place(x=330,y=250)


label_2=tk.Label(root,text="enter the password  :",fg="white",bg="black")
label_2.place(x=200,y=280)


password=tk.Entry(root,width=30)
password.place(x=330,y=280)


button_1=tk.Button(root,text="login" ,fg="white" , bg="blue",width=15 ,command=loginAdmin)
button_1.place(x=355,y=310)


label_pas=tk.Label()
label_pas.place(x=355,y=400)


label_uname=tk.Label()
label_uname.place(x=355,y=400)

root.mainloop()


