//////////////////////////////////////////////////////////////////////////
//
// Function name : CheckZero
// Input :         Integer
// Output :        Boolean
// Description :   It is used to check zero is present in number or not
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
      if iRet is true
         print It contains zero
      else
         print There is no Zero
               
  STOP
*/
#include"Header.h"

BOOL CheckZero(int iNo)
{
  int iDigit=0;
  BOOL Flag=FALSE;

  if(iNo==0)
  {
    return TRUE;
  }


  while(iNo!=0)
  { 
    iDigit=iNo%10;

    if(iDigit==0)
    {
      Flag=TRUE;
    }
       
    iNo=iNo/10;
   }

  return Flag;


}


