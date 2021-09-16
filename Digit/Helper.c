//////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Integer
// Output :        Integer
// Description :   It is use to Display Digits in iNo
// Author :        Priyanka Sapakal
// Date:           13/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
      Print the Digit

         
  STOP
*/
#include"Header.h"

void Display(int iNo)
{
  int iDigit=0;
  
  if(iNo<0)
    {
      iNo=-iNo;
    }

  while(iNo!=0)
  { 
    iDigit=iNo%10;
    printf("%d\n",iDigit);
    iNo=iNo/10;
   }


}


