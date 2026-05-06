#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
    int fd = 0;
    int Ret = 0;
    char Arr[20];

    fd = open("Marvellous.txt",O_RDWR);     //read -write mode

    if(fd == -1)
    {
        printf("Unable to open file..");
    }
    else
    {
        printf("File gets opened with fd: %d\n",fd);

        Ret = read(fd,Arr,6);

        printf("%d bytes get read from the file\n",Ret);
        printf("%s\n",Arr);
    }

    close(fd);    

    return 0;

}