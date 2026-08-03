import sys
import os
import hashlib              # checksum calculations  : MD5


def CalculateChecksum(FileName):
    fobj = open(FileName,"rb")             #read mode in Binary format  : Binary IO   : we can pass executables: so we can handle any tyoe of file
    
    hobj = hashlib.md5()                        #md5 generation
    
    Buffer = fobj.read(1000)            # reading 1000 bytes at a time store in list Buffer
    
    while(len(Buffer) > 0):             # till empty file
        hobj.update(Buffer)
        Buffer = fobj.read(1000)            
        
    fobj.close()
    
    return hobj.hexdigest()                # checksum  : hex digest      
        
        

def main():
    Ret = CalculateChecksum("DemoX.txt")
    
    print("Checksum of file is : ",Ret)

    
if __name__ == "__main__":
    main()
    