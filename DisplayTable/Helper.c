//////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayTable
// Input :         Integer
// Output :        Integer
// Description :   It is used to Display Table of that number
// Author :        Priyanka Sapakal
// Date:           15/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      
      Multiply Number with iCnt
      Display Table
         
  STOP
*/

#include"Header.h"

void DisplayTable(int iNumber)
{
  register int iCnt=0;
  if(iNumber<0)
   {
     iNumber=-iNumber;
   }
   if(iNumber==0)
   {
     return;
   }

   for(iCnt=1;iCnt<=10;iCnt++)
   {
     printf("%d * %d = %d\n",iNumber,iCnt,(iNumber*iCnt));
    }
 }

