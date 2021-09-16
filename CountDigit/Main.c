//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Count the Digits in the Number
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0,iRet=0;
 
 printf("Enter number\n");
 scanf("%d",&iNo);
 
 iRet=CountDigits(iNo);
 printf("Number of Digits are :%d\n",iRet);
 
 return 0;
}