//////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Integer
// Output :        Integer
// Description :   It is use to Display Digits in iNo
// Author :        Priyanka Sapakal
// Date:           13/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
      Print the Digit

         
  STOP
*/
#include"Header.h"

void Display(int iNo)
{
  int iDigit=0;
  
  if(iNo<0)
    {
      iNo=-iNo;
    }

  while(iNo!=0)
  { 
    iDigit=iNo%10;
    printf("%d\n",iDigit);
    iNo=iNo/10;
   }


}








//////////////////////////////////////////////////////////////////////////
//
// Function name : CountDigits
// Input :         Integer
// Output :        Integer
// Description :   It is use to counts the Digits  of iNo
// Author :        Priyanka Sapakal
// Date:           13/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      increase the Counter
      

      store the Count in iRet
      Print the iRet

         
  STOP
*/
#include"Header.h"

int CountDigits(int iNo)
{
 int iDigit=0,iCount=0;
 
  if(iNo<0)
    {
      iNo=-iNo;
    }
  if(iNo==0)
  {
    return 1;
  }
  while(iNo!=0)
  {
    iCount++;
    
    iNo=iNo/10;
   }
  return iCount;


}











//////////////////////////////////////////////////////////////////////////
//
// Function name : CountEven
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of Even Digits in iNo.
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains Even Digit
       if True increase count
     return count
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountEven(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
   if(iNo==0)
   {
      return 1;
   }

   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit%2==0)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}











//////////////////////////////////////////////////////////////////////////
//
// Function name : CheckZero
// Input :         Integer
// Output :        Boolean
// Description :   It is used to check zero is present in number or not
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
      if iRet is true
         print It contains zero
      else
         print There is no Zero
               
  STOP
*/
#include"Header.h"

BOOL CheckZero(int iNo)
{
  int iDigit=0;
  BOOL Flag=FALSE;

  if(iNo==0)
  {
    return TRUE;
  }


  while(iNo!=0)
  { 
    iDigit=iNo%10;

    if(iDigit==0)
    {
      Flag=TRUE;
    }
       
    iNo=iNo/10;
   }

  return Flag;


}







//////////////////////////////////////////////////////////////////////////
//
// Function name : CountFour
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of 4 in iNo.
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains 4
       if True increase count
     return count
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountFour(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }

   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit==4)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}









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












//////////////////////////////////////////////////////////////////////////
//
// Function name : CountOdd
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of odd Digits in iNo.
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains odd Digit
       if True increase count
     
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountOdd(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
   
   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit%2!=0)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}












//////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountRange
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of Digits between 3 and 7 in iNo.
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
      Check if it contains Digit between 3 and 7
        if True increase count
     
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountRange(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
   
   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit>3 && iDigit<7)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}








/////////////////////////////////////////////////////////////////////////
//
// Function name : CountTwo
// Input :         Integer
// Output :        Integer
// Description :   It is used to count frequency of 2 in iNo.
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains 2
       if True increase count
     return count
     Store Count in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

int CountTwo(int iNo)
{
   int iDigit=0,iCount=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit==2)
     {
       iCount++;
     }
       
     iNo=iNo/10;
   }

  return iCount;


}










/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountDiff
// Input :         Integer
// Output :        Integer
// Description :   It is used to difference between summation of even digits and summation of odd digits.
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains Even Digit
       if True add the even Digits
       else add the odd Digit

     Store sum in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

 int CountDiff(int iNo)
{
   int iDigit=0,iEven=0,iOdd=0,iDiff=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
  

   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit%2==0)
     {
       iEven=iEven+iDigit;
     }
     else
      {
        iOdd=iOdd+iDigit;
      }
     iNo=iNo/10;
   }
   
   iDiff=iEven-iOdd;
  return iDiff;


}














/////////////////////////////////////////////////////////////////
//
// Function name : MulDigit
// Input :         Integer
// Output :        Integer
// Description :   It is used to Multiply Digits in iNo
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Find the Digits of the number
       Multiply the Digits

      Store the result in Mult
      Return the value of Mult
  STOP
*/



#include"Header.h"

UINT MulDigit(int iNumber)
{
  int iDigit=0;
  UINT iMult=1;

  while(iNumber!=0)
  {
     iDigit=iNumber%10;
     if(iDigit!=0)
      {
        iMult=iMult*iDigit;
      }
      iNumber=iNumber/10;
    }
 return iMult;
}











//////////////////////////////////////////////////////////////////////////
//
// Function name : AddDigit
// Input :         Integer
// Output :        Integer
// Description :   It is use to perform the addition of Digits in iNo
// Author :        Priyanka Sapakal
// Date:           13/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      add the Digits
      return sum
    

      store the sum in iRet
      Print the iRet

         
  STOP
*/
#include"Header.h"

int AddDigit(int iNo)
{
 int iDigit=0;
 unsigned int iSum=0;
  
  if(iNo<0)
    {
      iNo=-iNo;
    }

  while(iNo!=0)
  {
    iDigit=iNo%10;
    iSum=iSum+iDigit;
    
    iNo=iNo/10;
   }
return iSum;


}














//////////////////////////////////////////////////////////////////////////
//
// Function name : ReverseNumber
// Input :         Integer
// Output :        Integer
// Description :   It is use to Reverse the iNo
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      Reverse the Number
          Reverse=Reverse*10+iDigit

      store the Reverse in iRet
      Print the iRet
         
  STOP
*/
#include"Header.h"

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











//////////////////////////////////////////////////////////////////////////
//
// Function name : SumEven
// Input :         Integer
// Output :        Integer
// Description :   It is used to Perform summation of  Even Digits in iNo.
// Author :        Priyanka Sapakal
// Date:           14/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      separate the Digit
      
     Check if it contains Even Digit
       if True adds the even Digits
     
     Store sum in iRet
     Display iRet
               
  STOP
*/
#include"Header.h"

 int SumEven(int iNo)
{
   int iDigit=0,iSum=0;
  
   if(iNo<0)
   {
     iNo=-iNo;
   }
  

   while(iNo!=0)
   { 
     iDigit=iNo%10;

     if(iDigit%2==0)
     {
       iSum=iSum+iDigit;
     }
       
     iNo=iNo/10;
   }

  return iSum;


}




