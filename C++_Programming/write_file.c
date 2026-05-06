#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
    int fd = 0;
    int Ret = 0;
    char Arr[] = "Marvellous Infosystems";

    fd = open("Marvellous.txt",O_RDWR);     //read -write mode

    if(fd == -1)
    {
        printf("Unable to open file..");
    }
    else
    {
        printf("File gets opened with fd: %d\n",fd);

        Ret = write(fd,Arr,10);

        printf("%d bytes get written int the file\n",Ret);
    }

    close(fd);
    

    return 0;

}