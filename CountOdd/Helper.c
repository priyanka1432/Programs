//////////////////////////////////////////////////////////////////////////
//
// Function name : CountOdd
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of odd Digits in iNo.
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains odd Digit
       if True increase count
     
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountOdd(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
   
   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit%2!=0)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}


