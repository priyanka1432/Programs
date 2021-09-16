/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountDiff
// Input :         Integer
// Output :        Integer
// Description :   It is used to difference between summation of even digits and summation of odd digits.
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains Even Digit
       if True add the even Digits
       else add the odd Digit

     Store sum in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

 int CountDiff(int iNo)
{
   int iDigit=0,iEven=0,iOdd=0,iDiff=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
  

   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit%2==0)
     {
       iEven=iEven+iDigit;
     }
     else
      {
        iOdd=iOdd+iDigit;
      }
     iNo=iNo/10;
   }
   
   iDiff=iEven-iOdd;
  return iDiff;


}


