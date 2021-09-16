//////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountRange
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of Digits between 3 and 7 in iNo.
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
      Check if it contains Digit between 3 and 7
        if True increase count
     
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountRange(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
   
   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit>3 && iDigit<7)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}


