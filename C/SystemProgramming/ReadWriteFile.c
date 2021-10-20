/////////////////////////////////////////////////////////////////////
//
// Write a program in c which is used to read whole file.
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
    int fd=0,fd1=0,iRet=0;
    char Fname1[30];
    char Fname2[30];
    char Buffer[1024];


    printf("Enter source file name\n");
    scanf("%s",Fname1);

    

    fd=open(Fname1,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open  file\n");
        return -1;
    }
    else
    {
        printf("File succesfully opened with FD:%d\n",fd);
        
    }

    printf("Enter destination file name\n");
    scanf("%s",Fname2);
    
    fd1=creat(Fname2,0777);
    


    while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
    {
        write(fd1,Buffer,iRet);
    }
    
    close(fd);
    close(fd1);

    return 0;
}