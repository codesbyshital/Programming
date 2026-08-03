import sys
import os
import hashlib              # checksum calculations

def CalculateChecksum(FileName):
    fobj = open(FileName,"rb")                  #read mode in Binary format  : Binary IO
    
    hobj = hashlib.md5()                        #md5 generation
    
    Buffer = fobj.read(1000)            # reading 1000 bytes at a time
    
    while(len(Buffer) > 0):             # till empty file
        hobj.update(Buffer)
        Buffer = fobj.read(1000)            
        
    fobj.close()
    
    return hobj.hexdigest()                # checksum  : hex digest      
        
        

def main():
    Ret = CalculateChecksum("Demo.txt")
    
    print("Checksum of file is : ",Ret)

    
if __name__ == "__main__":
    main()
    