//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Multiply Digits in number
//
//////////////////////////////////////////////////////////////////////





#include"Header.h"
int main()
{
 int iNo=0;
 UINT iRet=0;
 
 printf("Enter number\n");
 scanf("%d",&iNo);

 iRet=MulDigit(iNo);
 printf("Multiplication is:%ld\n",iRet);
 printf("%d",sizeof(iRet));

 return 0;
}