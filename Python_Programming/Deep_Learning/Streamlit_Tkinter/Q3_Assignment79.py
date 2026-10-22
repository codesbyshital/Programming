#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_79: Q.3: Develop a Tkinter application that accept Radius of circle. 
#                                  provide calculate Area button to calculate & display the area of the circle.
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import tkinter as tk   # import Tkinter for GUI
from tkinter import messagebox

root = tk.Tk()

root.title("Calculate Circle Area")
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
    text="Calculate Circle Area",
    font =("Arial",18,"bold"),
    bg=BG_COLOR,
    fg=TITLE_COLOR
).pack(pady=15)   


# Input Radius
tk.Label(
    root,
    text="Enter Radius of Circle:",
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


# Function to calculate circle area
def CalculateArea():
    try:
        radius = float(entry1.get())
        area = 3.14 * radius ** 2
        
        labelResult.config(
            text=f"Area of Circle: {area:.2f}",
            fg=RESULT_COLOR
        )

    except ValueError:
        messagebox.showerror(
            "Invalid Input",
            "Please enter a valid number for the radius."
        )


# Button
btnFind = tk.Button(
    root,
    text="Calculate Area",
    command=CalculateArea,
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