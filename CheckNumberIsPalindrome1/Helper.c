//////////////////////////////////////////////////////////////////////////
//
// Function name : CheckPalindrome
// Input :         Integer
// Output :        Integer
// Description :   It is used to Check the Number is Palindrome or not
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Store the number in iNo1
      separate the Digit
      Reverse the Number
          Reverse=Reverse*10+iDigit
      
      check if iNo1 and Reverse 
        if equal return TRUE
        else return FALSE
    
      if bRet is TRUE print It is palindrome
      else  print It is not palindrome     
         
  STOP
*/
#include"Header.h"

BOOL CheckPalindrome(int iNo)
{
   int iNo1=0;
   
 
   iNo1=ReverseNumber(iNo);
   
   if(iNo1==iNo)
   {
     return TRUE;
    }
    else
    {

      return FALSE;
    }
}
int ReverseNumber(int iNo)
{
  int iDigit=0,iReverse=0;
  while(iNo!=0)
  {
    iDigit=iNo%10;
    iReverse=iReverse*10+iDigit; 
    iNo=iNo/10;
   }
   
  return iReverse;
}


