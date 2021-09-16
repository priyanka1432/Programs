//////////////////////////////////////////////////////////////////////////
//
// Function name : CountDigits
// Input :         Integer
// Output :        Integer
// Description :   It is use to counts the Digits  of iNo
// Author :        Priyanka Sapakal
// Date:           13/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      increase the Counter
      

      store the Count in iRet
      Print the iRet

         
  STOP
*/
#include"Header.h"

int CountDigits(int iNo)
{
 int iDigit=0,iCount=0;
 
  if(iNo<0)
    {
      iNo=-iNo;
    }
  if(iNo==0)
  {
    return 1;
  }
  while(iNo!=0)
  {
    iCount++;
    
    iNo=iNo/10;
   }
  return iCount;


}


