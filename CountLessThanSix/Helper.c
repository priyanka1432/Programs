/////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Count
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of such a digits which are less than 6.
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains less than 6
       if True increase count
     return count
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int Count(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
   else if(iNo==0)
   {
     return 1;
   }

   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit<6)
     {
       iCount++;
     }
     
     iNo=iNo/10;
   }

  return iCount;


}


