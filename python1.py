import tkinter as tk
from tkinter import messagebox


def login():
    username = username_entry.get()
    password = password_entry.get()

    if username == "admin" and password == "password":
        messagebox.showinfo("Login Success", "Welcome, Admin!")
    else:
        messagebox.showerror("Login Failed", "Invalid Credentials")


# Initialize the main window
root = tk.Tk()
root.title("Login Page")
root.geometry("700x1000")

# Set background color
root.configure(bg='#ADD8E6')

# Title label
title_label = tk.Label(root, text="package anuja", font=("Arial", 24), bg="yellow")
title_label.pack(pady=20)

# Username label and entry
username_label = tk.Label(root, text="Username", font=("Arial", 14), bg='#ADD8E6', fg="#333")
username_label.pack(pady=5)
username_entry = tk.Entry(root, font=("Arial", 14), width=30)
username_entry.pack(pady=5)

# Password label and entry
password_label = tk.Label(root, text="Password", font=("Arial", 14), bg='#ADD8E6', fg="#333")
password_label.pack(pady=5)
password_entry = tk.Entry(root, font=("Arial", 14), show="*", width=30)
password_entry.pack(pady=5)

# Login button
login_button = tk.Button(root, text="Login", font=("Arial", 14), bg='#FFA07A', fg="#FFF", command=login)
login_button.pack(pady=20)

root.mainloop()
