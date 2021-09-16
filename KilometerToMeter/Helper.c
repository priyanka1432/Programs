//////////////////////////////////////////////////////////////////////////
//
// Function name : Converter
// Input :         Integer
// Output :        Integer
// Description :   It is used to Convert Kilometer to meter
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Distance in Kilometer 
      Covert it in Meter
           iMeter=iKilometer*1000
      
      Print the iDistance
       
  STOP
*/

#include"Header.h"

int Converter(int iKilomtr)
{
  int iMeter=0;
  
  if(iKilomtr<0)
   {
     iKilomtr=-iKilomtr;
   }

  iMeter=iKilomtr*1000;

  return iMeter;


}


