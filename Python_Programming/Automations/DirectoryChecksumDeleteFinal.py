import sys
import os
import hashlib              # checksum calculations  : MD5

# checksum store into dictionary  : added delete duplicate method.


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
    
    
    for FolderName, SubFolder, FileName in os.walk(DirectoryName):
        for fname in FileName:
            fname = os.path.join(FolderName,fname)              # Relative path  like absulate path
            
            Checksum = CalculateChecksum(fname)     # Calulate checksum runs N times (N = number of files)
           
            if Checksum in Duplicate:
                
                Duplicate[Checksum].append(fname)           #append the dictionary  : key value for second time
            else:
                
                Duplicate[Checksum] = [fname]       #key value for first time
    return Duplicate   # retuning dictionary to calle           
    
    
def DeleteDuplicate(DirectoryName):
    MyDict = FindDuplicate(DirectoryName)
    
    
    # give the values filter: fname  : file names 
    Result = list(filter(lambda x : len(x) > 1, MyDict.values())) 
    
    Count = 0           #counting duplicate file
    TotalDeleted = 0           #total deleted files
        
    for value in Result:
        
        for subvalue in value:
            
            Count = Count + 1               # 2+2  = 4 times
            if(Count > 1):
                os.remove(subvalue)             # deletes duplicate
                TotalDeleted = TotalDeleted + 1
                
        Count = 0               # reset the count to 0 for next for loop 
        
    print("Total Deleted files are :",TotalDeleted)
      


def main():
    DeleteDuplicate("Test")
    
    
if __name__ == "__main__":
    main()
    
    
    
    
    
# add below in this project : logfile as well : 
# total file sscanned, total duplicate files found, total time required to deleted.
# command line as input , periodically schedule
#--h & --u mention