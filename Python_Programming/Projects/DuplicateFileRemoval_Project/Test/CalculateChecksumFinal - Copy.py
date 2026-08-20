import sys
import os
import hashlib              # checksum calculations  : MD5


def CalculateChecksum(FileName):
    fobj = open(FileName,"rb")             #read mode in Binary format  : Binary IO   : we can pass executables: so we can handle any tyoe of file
    
    hobj = hashlib.md5()                        #md5 generation
    
    Buffer = fobj.read(1024)            # reading 1000 bytes at a time store in list Buffer
    
    while(len(Buffer) > 0):             # till empty file 1 block : 1024 bytes : 1KB : HDD  for RAM : Page : 1KB : 1024 bytes
        hobj.update(Buffer)
        Buffer = fobj.read(1024)            # OS will give 1024 so no wastage 
        
    fobj.close()
    
    return hobj.hexdigest()                # checksum  : hex digest  : 32 Bytes    
        
        

def main():
    Ret = CalculateChecksum("DemoX.txt")
    
    print("Checksum of file is : ",Ret)

    
if __name__ == "__main__":
    main()
    