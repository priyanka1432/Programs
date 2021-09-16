//////////////////////////////////////////////////////////////////////
//
// Accept distance in kilometre and convert it into meter.
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iKiloMtr=0,iRet=0;
 
  printf("Enter Distance in kilometer \n");
  scanf("%d",&iKiloMtr);
 
  iRet=Converter(iKiloMtr);
  printf("The Distance in meter is :%d\n",iRet);
 
 return 0;
}