#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_79: Q.4: Develop a Tkinter application that accept Person's name & Age. 
#                                  provide check eligibility button to determinewhether person is eligible for vote based
#                                  on minimum age of 18 years.
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import tkinter as tk   # import Tkinter for GUI
from tkinter import messagebox

root = tk.Tk()

root.title("Check Voting Eligibility")
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
    text="Check Voting Eligibility",
    font =("Arial",18,"bold"),
    bg=BG_COLOR,
    fg=TITLE_COLOR
).pack(pady=15)   


# Input Name and Age
tk.Label(
    root,
    text="Enter Person's Name:",
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
    text="Enter Person's Age:",
    font=("Arial", 11, "bold"),
    bg=BG_COLOR,
    fg=LABEL_COLOR
).pack(pady=(5, 3))

entryAge = tk.Entry(
    root,
    font=("Arial", 12),
    bg=ENTRY_BG,
    fg="#2C3E50",
    insertbackground=TITLE_COLOR,
    relief="solid",
    bd=1,
    justify="center"
)
entryAge.pack(ipady=5, ipadx=10)


# Function to check voting eligibility
def CheckEligibility():
    try:
        name = entryName.get()
        age = int(entryAge.get())

        if age >= 18:
            labelResult.config(
                text=f"{name} is eligible to vote.",
                fg=RESULT_COLOR
            )
        else:
            labelResult.config(
                text=f"{name} is not eligible to vote.",
                fg="#A93226"
            )

    except ValueError:
        messagebox.showerror(
            "Invalid Input",
            "Please enter a valid number for the age."
        )


# Button
btnCheck = tk.Button(
    root,
    text="Check Eligibility",
    command=CheckEligibility,
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
btnCheck.pack(pady=18)


# Button hover effects
def on_enter(event):
    btnCheck.config(bg=BUTTON_HOVER)

def on_leave(event):
    btnCheck.config(bg=BUTTON_COLOR)

btnCheck.bind("<Enter>", on_enter)
btnCheck.bind("<Leave>", on_leave)


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