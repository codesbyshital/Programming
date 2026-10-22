#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_79: Q.5: Develop a Tkinter application that accept Username & Password using entry widgets. 
#                                  provide login button to validate the entered credentials agianst predefined values
#                                  and displayan appropriate success or failure message.
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import tkinter as tk   # import Tkinter for GUI
from tkinter import messagebox

root = tk.Tk()

root.title("Login")

root.geometry("450x430")
root.configure(bg="#DFEFFB")
root.resizable(False, False)

# Color configuration
BG_COLOR = "#EAF2F8"
TITLE_COLOR = "#154360"
LABEL_COLOR = "#1A5276"
ENTRY_BG = "#FFFFFF"
ENTRY_BORDER = "#3498DB"
BUTTON_COLOR = "#2874A6"
BUTTON_HOVER = "#1E8449"
BUTTON_TEXT = "#FFFFFF"
RESULT_COLOR = "#196F3D"

# Title label
tk.Label(
    root,
    text="Login",
    font =("Arial",18,"bold"),
    bg=BG_COLOR,
    fg=TITLE_COLOR
).pack(pady=15)   


# Input Username and Password
tk.Label(
    root,
    text="Enter Username:",
    font=("Arial", 11, "bold"),
    bg=BG_COLOR,
    fg=LABEL_COLOR
).pack(pady=(5, 3))

entryName = tk.Entry(
    root,
    font=("Arial", 12),
    bg=ENTRY_BG,
    fg="#2C3E50",
    insertbackground=TITLE_COLOR,
    relief="solid",
    bd=1,
    justify="center"
)
entryName.pack(ipady=5, ipadx=10)

tk.Label(
    root,
    text="Enter Password:",
    font=("Arial", 11, "bold"),
    bg=BG_COLOR,
    fg=LABEL_COLOR
).pack(pady=(5, 3))

entryPassword = tk.Entry(
    root,
    font=("Arial", 12),
    bg=ENTRY_BG,
    fg="#2C3E50",
    insertbackground=TITLE_COLOR,
    relief="solid",
    bd=1,
    justify="center"
)
entryPassword.pack(ipady=5, ipadx=10)


# Function to check login credentials
def CheckLogin():
    try:
        username = entryName.get()
        password = entryPassword.get()

        # Predefined valid credentials
        if username == "admin" and password == "password":
            labelResult.config(
                text="Login successful!",
                fg=RESULT_COLOR
            )
        else:
            labelResult.config(
                text="Invalid username or password.",
                fg="#A93226"
            )

    except Exception as e:
        messagebox.showerror(
            "Error",
            f"An error occurred: {e}"
        )


# Button
btnLogin = tk.Button(
    root,
    text="Login",
    command=CheckLogin,
    font=("Arial", 12, "bold"),
    bg=BUTTON_COLOR,
    fg=BUTTON_TEXT,
    activebackground=BUTTON_HOVER,
    activeforeground=BUTTON_TEXT,
    relief="flat",
    cursor="hand2",
    padx=20,
    pady=8
)
btnLogin.pack(pady=18)


# Button hover effects
def on_enter(event):
    btnLogin.config(bg=BUTTON_HOVER)

def on_leave(event):
    btnLogin.config(bg=BUTTON_COLOR)

btnLogin.bind("<Enter>", on_enter)
btnLogin.bind("<Leave>", on_leave)


# Result label
labelResult = tk.Label(
    root,
    text="",
    font=("Arial", 11, "bold"),
    bg=BG_COLOR,
    fg=LABEL_COLOR
)
labelResult.pack(pady=(5, 3))


# Start the application
root.mainloop()