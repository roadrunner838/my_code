import pymysql as sql
import tkinter as tk
import tkinter.messagebox
def add(a,b,c):
    s=sql.connect(
        host="localhost",
        user="root",
        password="",
        database="new_python"
    )
    x=s.cursor()
    name=a
    age=b
    job=c
    sq="insert into employee_information( name, age, job) values(%s,%s,%s)"
    var=(name,age,job)
    x.execute(sq, var)
    s.commit()
##################################################################
def window_add():
    window_add=tk.Toplevel(window)
    window_add.title("add")
    window_add.geometry("500x500")
    label_name = tk.Label(window_add, text="enter the name :")
    label_name.pack()
    entry_name = tk.Entry(window_add)
    entry_name.pack()
    ##########################################
    label_age = tk.Label(window_add, text="enter the age :")
    label_age.pack()
    entry_age = tk.Entry(window_add)
    entry_age.pack()
    ##########################################
    label_job = tk.Label(window_add, text="enter the job :")
    label_job.pack()
    entry_job = tk.Entry(window_add)
    entry_job.pack()
    ##########################################
    button_add = tk.Button(window_add, text="click", command=lambda :add(entry_name.get(),entry_age.get(),entry_job.get()))
    button_add.pack()

#################################################################
def window_show():
    global window_show,list_box
    window_show = tk.Toplevel(window)
    window_show.title("show")
    window_show.geometry("500x500")
    list_box = tk.Listbox(window_show)
    list_box.pack()
    button_show1=tk.Button(window_show,text="show",command=show)
    button_show1.pack()
##############################################################
def show():

    s=sql.connect(
        host="localhost",
        user="root",
        password="",
        database="new_python"
    )
    x=s.cursor()
    x.execute("SELECT * FROM `employee_information` WHERE 1")
    result=x.fetchall()
    for i in result:
        list_box.insert(0,f"{i}")

###################################################################
def window_search():
    global listbox_search
    window_search=tk.Toplevel(window)
    window_search.title("search")
    window_search.geometry("500x500")
    label_search=tk.Label(window_search,text="enter the name :")
    label_search.pack()
    entry_search=tk.Entry(window_search)
    entry_search.pack()
    button_search=tk.Button(window_search,text="search",command=lambda :search(entry_search.get()))
    button_search.pack()
    listbox_search=tk.Listbox(window_search)
    listbox_search.pack()
###########################################################
def search(a):
    s=sql.connect(
        host="localhost",
        user="root",
        password="",
        database="new_python"
    )
    x=s.cursor()
    sq = "SELECT * FROM employee_information WHERE name = %s"
    name=a
    x.execute(sq, name)

    result = x.fetchall()

    for i in result:
        listbox_search.insert(0,f"{i}")

##################################################################
def window_delete():

    window_delete=tk.Toplevel(window)
    window_delete.title("delete")
    window_delete.geometry("200x200")
    label_delete=tk.Label(window_delete,text="enter the code")
    label_delete.pack()
    entry_delete=tk.Entry(window_delete)
    entry_delete.pack()
    button_delete=tk.Button(window_delete,text="delete",command=lambda :delete(entry_delete.get()))
    button_delete.pack()
########################################################################## ########
def delete(a):
    if tkinter.messagebox.askyesno("Are you sure you want to delete it?"):
        s=sql.connect(
            host="localhost",
            user="root",
            password="",
            database="new_python"
        )
        x=s.cursor()
        code=a
        sq="DELETE FROM `employee_information` WHERE code=%s"

        x.execute(sq, code)
        s.commit()

###################################################################################
window=tk.Tk()
window.title("Employee")
window.geometry("500x500")
##########################################
label_choice=tk.Label(window,text="choice :",bg="yellow")
label_choice.pack()
button_add=tk.Button(window,text="add",command=window_add,bg="blue")
button_add.place(x=240,y=30)

button_show=tk.Button(window,text="show",command=window_show,bg="blue")
button_show.place(x=240,y=60)

button_search=tk.Button(window,text="search",command=window_search,bg="blue")
button_search.place(x=240,y=90)

button_delete=tk.Button(window,text="delete",command=window_delete,bg="blue")
button_delete.place(x=240,y=120)

window.mainloop()