//////////////////////////////////////////////////////////////////////
//
// Accept area in square feet and convert it into square meter.
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iValue=0;
  double dRet=0.0;

  printf("Enter area in square feet \n");
  scanf("%d",&iValue);
  
 
  dRet=SquareMeter(iValue);
  printf("%f\n",dRet);
 
 return 0;
}