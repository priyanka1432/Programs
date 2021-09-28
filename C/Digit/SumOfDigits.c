//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and add Digits of the Number
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0,iRet=0;
 
 printf("Enter number\n");
 scanf("%d",&iNo);
 
 iRet=AddDigit(iNo);
 printf("Addition of digit is :%d\n",iRet);
 
 return 0;
}