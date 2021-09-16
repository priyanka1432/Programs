//////////////////////////////////////////////////////////////////////////
//
// Function name : AddDigit
// Input :         Integer
// Output :        Integer
// Description :   It is use to perform the addition of Digits in iNo
// Author :        Priyanka Sapakal
// Date:           13/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      add the Digits
      return sum
    

      store the sum in iRet
      Print the iRet

         
  STOP
*/
#include"Header.h"

int AddDigit(int iNo)
{
 int iDigit=0;
 unsigned int iSum=0;
  
  if(iNo<0)
    {
      iNo=-iNo;
    }

  while(iNo!=0)
  {
    iDigit=iNo%10;
    iSum=iSum+iDigit;
    
    iNo=iNo/10;
   }
return iSum;


}


