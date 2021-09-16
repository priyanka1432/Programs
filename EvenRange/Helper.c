//////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Integer,Integer
// Output :        Integer
// Description :   It is use to Display Even Numbers between the given range.
// Author :        Priyanka Sapakal
// Date:           13/09/2021
//
/////////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Starting number and ending number 
          check if the number is even
         if even Display the number between the range

         
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
     for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
      {
           if(iCnt%2==0)
           {
            printf("%d\t",iCnt);
            }
       }
   }
   
}


