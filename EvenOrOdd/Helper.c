//////////////////////////////////////////////////////////////////////////
//
// Function name : CheckEven
// Input :         Integer
// Output :        Boolean
// Description :   It is use to check if number is even or not
// Author :        Priyanka Sapakal
// Date:           08/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Check if the number is even or not
             if((iValue%2)==0)
      Store the result in RET
      Return the value of RET
  STOP
*/
#include"Header.h"

bool CheckEven(int iValue)
{
  if((iValue%2)==0)
   {
      return true;
    }
   else
    {
      return false;
    }
}


