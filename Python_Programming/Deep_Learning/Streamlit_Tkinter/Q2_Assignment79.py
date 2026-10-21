#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_79: Q.2: Develop a Tkinter application that accept three numbers from the user. 
#                                  provide Find Maximum button to determine & display the largest number.
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import tkinter as tk   # import Tkinter for GUI
from tkinter import messagebox

root = tk.Tk()

root.title("Find Maximum Number")
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
    text="Find Maximum Number:",
    font =("Arial",18,"bold"),
    bg=BG_COLOR,
    fg=TITLE_COLOR
).pack(pady=15)   


# Input First Number
tk.Label(
    root,
    text="Enter First Number:",
    font=("Arial", 11, "bold"),
    bg=BG_COLOR,
    fg=LABEL_COLOR
).pack(pady=(5, 3))

entry1 = tk.Entry(
    root,
    font=("Arial", 12),
    bg=ENTRY_BG,
    fg="#2C3E50",
    insertbackground=TITLE_COLOR,
    relief="solid",
    bd=1,
    justify="center"
)
entry1.pack(ipady=5, ipadx=10)

# Input Second Number
tk.Label(
    root,
    text="Enter Second Number:",
    font=("Arial", 11, "bold"),
    bg=BG_COLOR,
    fg=LABEL_COLOR
).pack(pady=(10, 3))

entry2 = tk.Entry(
    root,
    font=("Arial", 12),
    bg=ENTRY_BG,
    fg="#2C3E50",
    insertbackground=TITLE_COLOR,
    relief="solid",
    bd=1,
    justify="center"
)
entry2.pack(ipady=5, ipadx=10)

# Input Third Number
tk.Label(
    root,
    text="Enter Third Number:",
    font=("Arial", 11, "bold"),
    bg=BG_COLOR,
    fg=LABEL_COLOR
).pack(pady=(10, 3))

entry3 = tk.Entry(
    root,
    font=("Arial", 12),
    bg=ENTRY_BG,
    fg="#2C3E50",
    insertbackground=TITLE_COLOR,
    relief="solid",
    bd=1,
    justify="center"
)
entry3.pack(ipady=5, ipadx=10)


# Function to find maximum
def FindMaximum():
    try:
        no1 = int(entry1.get())
        no2 = int(entry2.get())
        no3 = int(entry3.get())

        maximum = max(no1, no2, no3)

        labelResult.config(
            text=f"Maximum Number: {maximum}",
            fg=RESULT_COLOR
        )

    except ValueError:
        messagebox.showerror(
            "Invalid Input",
            "Please enter valid integers in all three fields."
        )


# Button
btnFind = tk.Button(
    root,
    text="Find Maximum",
    command=FindMaximum,
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
btnFind.pack(pady=18)


# Button hover effects
def on_enter(event):
    btnFind.config(bg=BUTTON_HOVER)

def on_leave(event):
    btnFind.config(bg=BUTTON_COLOR)

btnFind.bind("<Enter>", on_enter)
btnFind.bind("<Leave>", on_leave)


# Result label
labelResult = tk.Label(
    root,
    text="",
    font=("Arial", 14, "bold"),
    bg=BG_COLOR,
    fg=RESULT_COLOR
)
labelResult.pack(pady=5)


# Start the application
root.mainloop()