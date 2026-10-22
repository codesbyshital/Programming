#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_79: Q.5: Develop a Tkinter application that accept Username & Password using entry widgets. 
#                                  provide login button to validate the entered credentials agianst predefined values
#                                  and displayan appropriate success or failure message.
# Here used two Python files:
#    - SetupCredentials.py — securely creates the initial account and saves its password hash to credentials.json.
#    - Q5_Assignment79X.py — your Tkinter login application, which verifies the entered password against the stored hash.
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import tkinter as tk
from tkinter import messagebox
import json
from pathlib import Path

from argon2 import PasswordHasher
from argon2.exceptions import (
    VerifyMismatchError,
    VerificationError,
    InvalidHashError
)

# Credential storage
CREDENTIAL_FILE = Path(__file__).with_name("credentials.json")

# Password hashing verifier
password_hasher = PasswordHasher()

# Create window
root = tk.Tk()
root.title("Secure Login")
root.geometry("450x450")
root.configure(bg="#EAF2F8")
root.resizable(False, False)

# Colors
BG_COLOR = "#EAF2F8"
TITLE_COLOR = "#154360"
LABEL_COLOR = "#1A5276"
ENTRY_BG = "#FFFFFF"
BUTTON_COLOR = "#2874A6"
BUTTON_HOVER = "#1E8449"
BUTTON_TEXT = "#FFFFFF"
RESULT_COLOR = "#196F3D"
ERROR_COLOR = "#A93226"

# Title
tk.Label(
    root,
    text="Secure User Login",
    font=("Arial", 22, "bold"),
    bg=BG_COLOR,
    fg=TITLE_COLOR
).pack(pady=20)

# Username
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

# Password
tk.Label(
    root,
    text="Enter Password:",
    font=("Arial", 11, "bold"),
    bg=BG_COLOR,
    fg=LABEL_COLOR
).pack(pady=(15, 3))

entryPassword = tk.Entry(
    root,
    font=("Arial", 12),
    bg=ENTRY_BG,
    fg="#2C3E50",
    insertbackground=TITLE_COLOR,
    relief="solid",
    bd=1,
    justify="center",
    show="*"
)
entryPassword.pack(ipady=5, ipadx=10)


# Show or hide password
showPassword = tk.BooleanVar(value=False)


def TogglePassword():
    if showPassword.get():
        entryPassword.config(show="")
    else:
        entryPassword.config(show="*")


tk.Checkbutton(
    root,
    text="Show Password",
    variable=showPassword,
    command=TogglePassword,
    bg=BG_COLOR,
    fg=LABEL_COLOR,
    activebackground=BG_COLOR,
    selectcolor=ENTRY_BG,
    font=("Arial", 10)
).pack(pady=8)


# Verify login credentials
def CheckLogin():
    username = entryName.get().strip()
    password = entryPassword.get()

    if not username or not password:
        labelResult.config(
            text="Enter username and password.",
            fg=ERROR_COLOR
        )
        return

    try:
        # Load stored credentials
        with CREDENTIAL_FILE.open(
            "r", encoding="utf-8"
        ) as file:
            credentials = json.load(file)

        stored_username = credentials["username"]
        stored_hash = credentials["password_hash"]

        # Check username before verifying password
        if username != stored_username:
            raise VerifyMismatchError

        # Verify password against stored Argon2id hash
        password_hasher.verify(stored_hash, password)

        labelResult.config(
            text="Login successful!",
            fg=RESULT_COLOR
        )

        messagebox.showinfo(
            "Login Status",
            f"Welcome, {username}!"
        )

    except (VerifyMismatchError, InvalidHashError,
            VerificationError, KeyError, ValueError):
        labelResult.config(
            text="Invalid username or password.",
            fg=ERROR_COLOR
        )

    except FileNotFoundError:
        messagebox.showerror(
            "Credentials Missing",
            "Run SetupCredentials.py to create an account."
        )

    except (OSError, json.JSONDecodeError):
        messagebox.showerror(
            "Storage Error",
            "Unable to read credentials. Check the credential file."
        )


# Login button
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
    padx=25,
    pady=8
)
btnLogin.pack(pady=15)


# Hover effects
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
labelResult.pack(pady=5)

# Start application
root.mainloop()
