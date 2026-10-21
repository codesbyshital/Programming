#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#        
# Description: Assignment_79: Q.1: Develop a Tkinter application that accept two numbers using Entry Widgets. 
#                                  provide Add button to calculate & display the addition using label widget.
#
# Date:            22/10/2026
# Author:          Shital Ajit Nikam   
#
#///////////////////////////////////////////////////////////////////////////////////////////////////////////////////



import tkinter as tk   # import Tkinter for GUI

root = tk.Tk()

root.title("Marvellous Addition Calculator")
root.geometry("400x300")
root.configure(bg="#DFEFFB")
root.resizable(False, False)

tk.Label(root, text="Marvellous Infosystem:",
         font =("Arial",18,"bold")).pack(pady=10)   

tk.Label(root, text="Enter First Number:").pack()
entry1 = tk.Entry(root)         # textbox for first number
entry1.pack()

tk.Label(root, text="Enter Second Number:").pack()
entry2 = tk.Entry(root)     # textbox for second number
entry2.pack()

def Addition():
    no1 = int(entry1.get())         # string to integer conversion  : get() : string value from textbox
    no2 = int(entry2.get())
    result = no1 + no2
    
    labelResult.config(text="Addition is:"+str(result)
                       )
    #tk.Label(root, text=f"Result: {result}").pack() 

tk.Button(root, text="Add", command=Addition).pack(pady=15) 

labelResult = tk.Label(root, text="", font=("Arial", 14, "bold"))
labelResult.pack()

root.mainloop()             # start running application   framename.mainloop()  :  start the GUI application