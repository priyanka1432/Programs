/////////////////////////////////////////////////////////////////////////
//
// Accept number from user and count frequency of 4 in it.  
//
////////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0,iRet=0;
  
 
  printf("Enter number\n");
  scanf("%d",&iNo);
 
  iRet=CountFour(iNo);
  printf("%d",iRet);
  
 return 0;
}