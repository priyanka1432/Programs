/////////////////////////////////////////////////////////////////
//
// Function name : Factorial
// Input :         Integer
// Output :        Integer
// Description :   It is use to perform Factorial of number
// Author :        Priyanka Sapakal
// Date:           07/09/2021
//
//////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Perform Factorial from 1 to iNo
           iFact=iFact*iCnt;
      Store the result in RET
      Return the value of RET
  STOP
*/



#include"Header.h"

UINT Factorial(int iValue)
{
  UINT iFact=1;
  register int iCnt=0;
  if(iValue<0)
  {
    iValue=-iValue;
  }
  iCnt=1;
  while(iCnt<=iValue)
   {
     iFact=iFact*iCnt;
     iCnt++;
    }

 
 return iFact;
}
