//////////////////////////////////////////////////////////////////////////
//
// Function name : ReverseNumber
// Input :         Integer
// Output :        Integer
// Description :   It is use to Reverse the iNo
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      Reverse the Number
          Reverse=Reverse*10+iDigit

      store the Reverse in iRet
      Print the iRet
         
  STOP
*/
#include"Header.h"

int ReverseNumber(int iNo)
{
  int iDigit=0,iReverse=0;
  
  while(iNo!=0)
  {
    iDigit=iNo%10;
    iReverse=iReverse*10+iDigit;
    
    iNo=iNo/10;
   }
  return iReverse;


}


