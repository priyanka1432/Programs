/////////////////////////////////////////////////////////////////////////
//
// Accept number from user and count frequency of Even Digits in it.  
//
////////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0,iRet=0;
  
 
  printf("Enter number\n");
  scanf("%d",&iNo);
 
  iRet=CountEven(iNo);
  printf("%d",iRet);
  
 return 0;
}