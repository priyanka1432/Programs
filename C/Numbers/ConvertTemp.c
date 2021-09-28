//////////////////////////////////////////////////////////////////////
//
// Accept temperature in Fahrenheit and convert it into celsius.
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  float fFahrn=0.0;
  double dRet=0.0;

  printf("Enter Temperature in Fahrenheit \n");
  scanf("%f",&fFahrn);
  
 
  dRet=ConverterTemp(fFahrn);
  printf("%f\n",dRet);
 
 return 0;
}