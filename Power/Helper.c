//////////////////////////////////////////////////////////////////////////
//
// Function name : Power
// Input :         Integer,Integer
// Output :        Integer
// Description :   It is used to Calculate the Power
// Author :        Priyanka Sapakal
// Date:           15/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      
      Multiply Number1  with iNumber1 ,iNumber2 times
      
     store it in iRet
     Display iRet
         
  STOP
*/

#include"Header.h"

UINT Power(int iNumber1,int iNumber2)
{
   UINT iMul=1;
   register int iCnt=0;

   
    
    if(iNumber1<0)
     {
       iNumber1=-iNumber1;
      }
      if(iNumber2<0)
     {
       iNumber2=-iNumber2;
      }
       
  
   for(iCnt=1;iCnt<=iNumber2;iCnt++)
   {
     iMul=iMul*iNumber1;
    }
    
   return iMul;
 }

