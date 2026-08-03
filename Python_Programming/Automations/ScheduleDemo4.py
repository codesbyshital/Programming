import schedule
import time
import datetime

def Display():                                      # call back function , task logic
    print("Jay Ganesh...",datetime.datetime.now())
    
def main():
    print("Automation Script started...")
    
    schedule.every(10).seconds.do(Display)               #call Display method.
    
    while True:
        schedule.run_pending()      # will check pending tasks explicitely if missed any tasks
        time.sleep(1)                   # PVM will sleep for 1 sec in between.
        
    print("End of Auromation Script")           # will not run bcoz we terminate abnormally
        
    
if __name__ == "__main__":
    main()