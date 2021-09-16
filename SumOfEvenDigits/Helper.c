//////////////////////////////////////////////////////////////////////////
//
// Function name : SumEven
// Input :         Integer
// Output :        Integer
// Description :   It is used to Perform summation of  Even Digits in iNo.
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
       if True adds the even Digits
     
     Store sum in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

 int SumEven(int iNo)
{
   int iDigit=0,iSum=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
  

   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit%2==0)
     {
       iSum=iSum+iDigit;
     }
       
     iNo=iNo/10;
   }

  return iSum;


}


