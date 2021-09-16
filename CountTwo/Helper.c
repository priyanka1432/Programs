//////////////////////////////////////////////////////////////////////////
//
// Function name : CountTwo
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of 2 in iNo.
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains 2
       if True increase count
     return count
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountTwo(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit==2)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}


