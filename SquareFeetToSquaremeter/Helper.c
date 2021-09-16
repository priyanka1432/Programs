//////////////////////////////////////////////////////////////////////////
//
// Function name : SquareMeter
// Input :         Integer
// Output :        Double
// Description :   It is used to Convert square feet  into square meter
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Area in SquareFeet
      Covert it inSquareMeter
           Meter=Feet/0.0929
      
      Strore the area in dRet
      print dRet
       
  STOP
*/

#include"Header.h"

double SquareMeter(int iFeet)
{
  double dMeter=0.0;
  
  if(iFeet<0)
  {
    iFeet=-iFeet;
   }
  
   dMeter=iFeet/10.764;
  
  
  return dMeter;


}


