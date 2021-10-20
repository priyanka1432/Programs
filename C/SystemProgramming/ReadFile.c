/////////////////////////////////////////////////////////////////////
//
// Write a program in c which is used to read from the file.
//                  
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>





int main()
{
    int fd=0,iRet=0;
    char Fname[30];
    char Data[7];


    printf("Enter file name\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDWR);

    if(fd==-1)
    {
        printf("Unable to open  file\n");
        return -1;
    }
    else
    {
        printf("File succesfully opened with FD:%d\n",fd);
        
    }

    iRet=read(fd,Data,6);

    printf("%d bytes gets succesfuly read from the file\n",iRet);

    printf("Data from the file is\n");
    write(1,Data,iRet);
    
    return 0;
    
}