//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Check Number is Perfect or not
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0;
  BOOL bRet=FALSE;
 
 printf("Enter number\n");
 scanf("%d",&iNo);
 
 bRet=CheckPerfect(iNo);

 
 if(bRet==TRUE)
 {
   printf("It is Perfect\n");
  }
  else
  {
     printf("It is not Perfect\n");
  }
 
 return 0;
}