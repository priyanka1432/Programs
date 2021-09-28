//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Display its Power
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo1=0,iNo2=0;
  UINT iRet=0;
  
 
  printf("Enter First number \n");
  scanf("%d",&iNo1);

  printf("Enter Second number \n");
  scanf("%d",&iNo2);
 
 
  iRet=Power(iNo1,iNo2);
  printf("%d\n",iRet);
  printf("%d\n",sizeof(iRet));
  
  return 0;
}