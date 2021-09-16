//////////////////////////////////////////////////////////////////////////
//
// Function name : ConverterTemp
// Input :         Float
// Output :        Double
// Description :   It is used to Convert Fahrenheit to Celsius
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Temperature in Fahrenheit 
      Covert it in Celsius
           Celsius=(Fahrenheitr-32)*(5/9)
      
      Strore the Celsius in dRet
      print dRet
       
  STOP
*/

#include"Header.h"

double ConverterTemp(float fFahrn)
{
  double dCelsius=0.0;
  
  if(fFahrn<0)
  {
    fFahrn=-fFahrn;
   }
  

  dCelsius=((fFahrn-32)*(5.0/9));
  
  return dCelsius;


}


