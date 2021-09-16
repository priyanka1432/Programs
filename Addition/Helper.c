//////////////////////////////////////////////////////////////////////////
//
// Function name : Addition
// Input :         Integer
// Output :        Integer
// Description :   It is use to perform addition  of number from 1 to iNo
// Author :        Priyanka Sapakal
// Date:           07/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Perform Addition of the iNo
             
      Store the result in RET
      Return the value of RET
  STOP
*/
#include"Header.h"

int Addition(int iValue)
{
  int iSum=0,iCnt=0;
  if(iValue<0)
  {
    iValue=-iValue;
  }

  for(iCnt=1;iCnt<=iValue;iCnt++)
  {
     iSum=iSum+iCnt;
   }
 return iSum;
}


