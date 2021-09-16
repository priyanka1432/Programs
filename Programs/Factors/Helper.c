/////////////////////////////////////////////////////////////////
//
// Function name : DisplayFactor
// Input :         Integer
// Output :        Display Factors
// Description :   It is use to Display Factors of number
// Author :        Priyanka Sapakal
// Date:           08/09/2021
//
//////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Display Factors of Number
             if((Number%i)==0)
      
  STOP
*/



#include"Header.h"

void DisplayFactor(int iValue)
{
  register int iCnt=0;

  if(iValue<0)
   {
      iValue=-iValue;
   }
  
  for(iCnt=1;iCnt<=iValue/2;iCnt++)
  {
     if((iValue%iCnt)==0)
      {
          printf("%d\n",iCnt);
       }
   }
}
