///////////////////////////////////////////////////////////////////////////////////////
//
// Function name : RangeSum
// Input :         Integer,Integer
// Output :        Integer
// Description :   It is use to perform addition of  Numbers between the given range.
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Starting number and ending number 
      Add all the number between the range
      Strore it in iRes
      Print iRes  
         
  STOP
*/
#include"Header.h"

int RangeSum(int iNo1,int iNo2)
{
  register int iCnt =0;
  int iSum=0;
  
  if(iNo1>iNo2||iNo1<0||iNo2<0)
    {
      return 0;
    }
    else
    {
       for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
       {
          iSum=iSum+iCnt;  
        }
     }
     
   return iSum;
}


