//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and perform the addition till that number
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
 int iNo=0,iRet=0;
 
 printf("Enter number\n");
 scanf("%d",&iNo);

 iRet=Addition(iNo);
 printf("Addition is:%d\n",iRet);

 return 0;
}