/////////////////////////////////////////////////////////////////////////////////
//
// Accept number from user and count frequency of  Digits between 3 and 7 in it.  
//
/////////////////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0,iRet=0;
  
 
  printf("Enter number\n");
  scanf("%d",&iNo);
 
  iRet=CountRange(iNo);
  printf("%d",iRet);
  
 return 0;
}