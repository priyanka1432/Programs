/////////////////////////////////////////////////////////////////
//
// Function name : MulDigit
// Input :         Integer
// Output :        Integer
// Description :   It is used to Multiply Digits in iNo
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Find the Digits of the number
       Multiply the Digits

      Store the result in Mult
      Return the value of Mult
  STOP
*/



#include"Header.h"

UINT MulDigit(int iNumber)
{
  int iDigit=0;
  UINT iMult=1;

  while(iNumber!=0)
  {
     iDigit=iNumber%10;
     if(iDigit!=0)
      {
        iMult=iMult*iDigit;
      }
      iNumber=iNumber/10;
    }
 return iMult;
}
