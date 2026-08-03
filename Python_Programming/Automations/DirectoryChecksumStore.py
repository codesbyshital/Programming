import sys
import os
import hashlib              # checksum calculations  : MD5

# checksum store into dictionary


def CalculateChecksum(FileName):
    fobj = open(FileName,"rb")             #read mode in Binary format  : Binary IO   : we can pass executables: so we can handle any tyoe of file
    
    hobj = hashlib.md5()                        #md5 generation
    
    Buffer = fobj.read(1024)            # reading 1000 bytes at a time store in list Buffer
    
    while(len(Buffer) > 0):             # till empty file 1 block : 1024 bytes : 1KB : HDD  for RAM : Page : 1KB : 1024 bytes
        hobj.update(Buffer)
        Buffer = fobj.read(1024)            # OS will give 1024 so no wastage 
        
    fobj.close()
    
    return hobj.hexdigest()                # checksum  : hex digest  : 32 Bytes    
        

def FindDuplicate(DirectoryName):
    Ret = False
    
    Ret = os.path.exists(DirectoryName)         # is it available    
    if Ret == False :
        print("Path is invalid")
        return
    
    Ret = os.path.isdir(DirectoryName)          # is is not direcory
    if(Ret == False):
        print("It is not a directory")
        return
    Duplicate = {}          # Empty Dictionary
    
    Unique = 0
    Same  = 0   
    
    for FolderName, SubFolder, FileName in os.walk(DirectoryName):
        for fname in FileName:
            fname = os.path.join(FolderName,fname)              # Relative path  like absulate path
            
            Checksum = CalculateChecksum(fname)     # Calulate checksum runs N times (N = number of files)
            
            print(f"{fname} : {Checksum}")
            
            if Checksum in Duplicate:
                Same = Same + 1
                Duplicate[Checksum].append(fname)           #append the dictionary  : key value for second time
            else:
                Unique = Unique + 1
                Duplicate[Checksum] = [fname]       #key value for first time
                
    print("Unique files found  : ",Unique)
    print("Duplicate file found : ",Same)          
    
    

def main():
    FindDuplicate("Test")
    
if __name__ == "__main__":
    main()
    