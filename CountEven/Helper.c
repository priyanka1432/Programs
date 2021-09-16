//////////////////////////////////////////////////////////////////////////
//
// Function name : CountEven
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of Even Digits in iNo.
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains Even Digit
       if True increase count
     return count
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountEven(int iNo)
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
     iDigit=iNo%10;

     if(iDigit%2==0)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}


