/////////////////////////////////////////////////////////////////////////
//
// Accept number from user and check whether it contains 0 in it or not.  
//
////////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0;
  BOOL bRet=FALSE;
 
  printf("Enter number\n");
  scanf("%d",&iNo);
 
 

  bRet=CheckZero(iNo);
  if(bRet==TRUE)
  {
    printf("It Contains Zero");
  }
  else
  {
    printf("There is no Zero");
  }

 

 return 0;
}