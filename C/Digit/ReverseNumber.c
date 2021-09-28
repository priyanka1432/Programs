//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Reverse the Number
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0,iRet=0;
 
 printf("Enter number\n");
 scanf("%d",&iNo);
 
 iRet=ReverseNumber(iNo);
 printf("%d\n",iRet);
 
 return 0;
}