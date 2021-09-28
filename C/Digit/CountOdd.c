/////////////////////////////////////////////////////////////////////////
//
// Accept number from user and count frequency of Odd Digits in it.  
//
////////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0,iRet=0;
  
 
  printf("Enter number\n");
  scanf("%d",&iNo);
 
  iRet=CountOdd(iNo);
  printf("%d",iRet);
  
 return 0;
}