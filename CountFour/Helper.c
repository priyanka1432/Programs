//////////////////////////////////////////////////////////////////////////
//
// Function name : CountFour
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of 4 in iNo.
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains 4
       if True increase count
     return count
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountFour(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }

   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit==4)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}


