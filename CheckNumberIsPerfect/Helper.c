//////////////////////////////////////////////////////////////////////////
//
// Function name : CheckPerfect
// Input :         Integer
// Output :        Integer
// Description :   It is used to Check the Number is Perfect or not
// Author :        Priyanka Sapakal
// Date:           15/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      add the factors of iNo
      store the sum in iNo1

       check if iNo1 and iNo equal
        if equal return TRUE
        else return FALSE
    
      if bRet is TRUE print It is perfect
      else  print It is not perfect
         
  STOP
*/
#include"Header.h"

BOOL CheckPerfect(int iNo)
{   
   int iNo1=0;

   if(iNo<0)
   {
      iNo=-iNo;
    } 

   iNo1=SumFactor(iNo);
   
   if(iNo1==iNo)
   {
     return TRUE;
    }
    else
    {

      return FALSE;
    }
}
int SumFactor(int iNo)
{
  int iSum=0;
  register int iCnt=0;

  
  
  for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
      if(iNo%iCnt==0)
       {
         iSum=iSum+iCnt;
        }
    }
 
   return iSum;
}


