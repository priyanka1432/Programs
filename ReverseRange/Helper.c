/////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Integer,Integer
// Output :        Integer
// Description :   It is use to Display Numbers between the given range in Reverse order.
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Starting number and ending number 
          
      Display the number between the range in Reverse order

         
  STOP
*/
#include"Header.h"

void Display(int iNo1,int iNo2)
{
  register int iCnt =0;
  
  if(iNo1>iNo2)
    {
      printf("Invalid range\n");
    }
    else
   {
     for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
      {
            printf("%d\t",iCnt);
       }
   }
   
}


