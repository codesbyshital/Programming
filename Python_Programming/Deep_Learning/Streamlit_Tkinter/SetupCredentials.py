# Set up credentials securely using Argon2id hashing and store them in a JSON file.
# this file used in conjunction with Q5_Assignment79X.py to create a secure login system.

import json
from getpass import getpass
from pathlib import Path
from argon2 import PasswordHasher

# Credential storage file
CREDENTIAL_FILE = Path(__file__).with_name("credentials.json")

# Argon2id password hasher
password_hasher = PasswordHasher()


def SetupCredentials():
    username = input("Create username: ").strip()

    if not username:
        print("Username cannot be empty.")
        return

    password = getpass("Create password: ")
    confirm_password = getpass("Confirm password: ")

    if not password:
        print("Password cannot be empty.")
        return

    if password != confirm_password:
        print("Passwords do not match.")
        return

    # Generate salted password hash
    password_hash = password_hasher.hash(password)

    # Store username and hash, never the plaintext password
    credentials = {
        "username": username,
        "password_hash": password_hash
    }

    # Create the credential file
    with CREDENTIAL_FILE.open("w", encoding="utf-8") as file:
        json.dump(credentials, file, indent=4)

    print("Account created successfully.")
    print(f"Credential file: {CREDENTIAL_FILE}")


if __name__ == "__main__":
    SetupCredentials()
