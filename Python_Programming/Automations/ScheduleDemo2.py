import schedule
import time
import datetime

def Display():                                      # call back function , task logic
    print("Jay Ganesh...",datetime.datetime.now())
    
def main():
    print("Automation Script started...")
    
    schedule.every(1).minute.do(Display)               #call Display method , it will not wait for 1 minute , process killed
    
    # issue : process not waiting for 1 min
    
if __name__ == "__main__":
    main()