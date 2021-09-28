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









//////////////////////////////////////////////////////////////////////////
//
// Function name : CircleArea
// Input :         float
// Output :        double
// Description :   It is used to Find Area of Circle
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Radius as fRadius
      Find the Area
           Area=PI*fRadius*fRadius
      
      Print the Area
       
  STOP
*/

#include"Header.h"

double CircleArea(float fRadius)
{
  double dArea=0.0;
  if(fRadius<0)
   {
     fRadius=-fRadius;
    }
    
  
  dArea=PI*fRadius*fRadius;
  return dArea;


}






//////////////////////////////////////////////////////////////////////////
//
// Function name : RectangleArea
// Input :         Float,Float
// Output :        Double
// Description :   It is used to calculate Area of Rectangle
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Width and Height  as fWidth and fHeight
      Find the Area
           Area=fWidth*fHeight
      
      Print the Area
       
  STOP
*/

#include"Header.h"

double RectangleArea(float fWidth,float fHeight)
{
  double dArea=0.0;
  if(fWidth<0)
  {
    fWidth=-fWidth;
   }
   if(fHeight<0)
   {
     fHeight=-fHeight;
    }

  dArea=fWidth*fHeight;
  return dArea;


}







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

BOOL CheckPalindrome2(int iNo)
{
   int iTemp=0,iDigit=0,iReverse=0;
   iTemp=iNo;
   
  while(iNo!=0)
  {
    iDigit=iNo%10;
    iReverse=iReverse*10+iDigit; 
    iNo=iNo/10;
   }
  
   
   if(iTemp==iReverse)
   {
     return TRUE;
    }
    else
    {

      return FALSE;
    }
}









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




//////////////////////////////////////////////////////////////////////////
//
// Function name : ConverterTemp
// Input :         Float
// Output :        Double
// Description :   It is used to Convert Fahrenheit to Celsius
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Temperature in Fahrenheit 
      Covert it in Celsius
           Celsius=(Fahrenheitr-32)*(5/9)
      
      Strore the Celsius in dRet
      print dRet
       
  STOP
*/

#include"Header.h"

double ConverterTemp(float fFahrn)
{
  double dCelsius=0.0;
  
  if(fFahrn<0)
  {
    fFahrn=-fFahrn;
   }
  

  dCelsius=((fFahrn-32)*(5.0/9));
  
  return dCelsius;


}





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

void EvenRange(int iNo1,int iNo2)
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













/////////////////////////////////////////////////////////////////
//
// Function name : Factorial
// Input :         Integer
// Output :        Integer
// Description :   It is use to perform Factorial of number
// Author :        Priyanka Sapakal
// Date:           07/09/2021
//
//////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Perform Factorial from 1 to iNo
           iFact=iFact*iCnt;
      Store the result in RET
      Return the value of RET
  STOP
*/



#include"Header.h"

UINT Factorial1(int iValue)
{
  UINT iFact=1;
  register int iCnt=0;
  if(iValue<0)
  {
    iValue=-iValue;
  }

  for(iCnt=1;iCnt<=iValue;iCnt++)
  {
     iFact=iFact*iCnt;
   }
 return iFact;
}









/////////////////////////////////////////////////////////////////
//
// Function name : Factorial
// Input :         Integer
// Output :        Integer
// Description :   It is use to perform Factorial of number
// Author :        Priyanka Sapakal
// Date:           07/09/2021
//
//////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Perform Factorial from 1 to iNo
           iFact=iFact*iCnt;
      Store the result in RET
      Return the value of RET
  STOP
*/



#include"Header.h"

UINT Factorial2(int iValue)
{
  UINT iFact=1;
  register int iCnt=0;
  if(iValue<0)
  {
    iValue=-iValue;
  }
  iCnt=1;
  while(iCnt<=iValue)
   {
     iFact=iFact*iCnt;
     iCnt++;
    }

 
 return iFact;
}












/////////////////////////////////////////////////////////////////
//
// Function name : DisplayFactor
// Input :         Integer
// Output :        Display Factors
// Description :   It is use to Display Factors of number
// Author :        Priyanka Sapakal
// Date:           08/09/2021
//
//////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  number as iNo
      Display Factors of Number
             if((Number%i)==0)
      
  STOP
*/



#include"Header.h"

void DisplayFactor(int iValue)
{
  register int iCnt=0;

  if(iValue<0)
   {
      iValue=-iValue;
   }
  
  for(iCnt=1;iCnt<=iValue/2;iCnt++)
  {
     if((iValue%iCnt)==0)
      {
          printf("%d\n",iCnt);
       }
   }
}














//////////////////////////////////////////////////////////////////////////
//
// Function name : Converter
// Input :         Integer
// Output :        Integer
// Description :   It is used to Convert Kilometer to meter
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Distance in Kilometer 
      Covert it in Meter
           iMeter=iKilometer*1000
      
      Print the iDistance
       
  STOP
*/

#include"Header.h"

int Converter(int iKilomtr)
{
  int iMeter=0;
  
  if(iKilomtr<0)
   {
     iKilomtr=-iKilomtr;
   }

  iMeter=iKilomtr*1000;

  return iMeter;


}












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












//////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Integer,Integer
// Output :        Integer
// Description :   It is use to Display Numbers between the given range
// Author :        Priyanka Sapakal
// Date:           13/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Starting number and ending number 
          
      Display the number between the range

         
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
            printf("%d\t",iCnt);
       }
   }
   
}









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

void ReverseRange(int iNo1,int iNo2)
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











//////////////////////////////////////////////////////////////////////////
//
// Function name : SquareMeter
// Input :         Integer
// Output :        Double
// Description :   It is used to Convert square feet  into square meter
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Area in SquareFeet
      Covert it inSquareMeter
           Meter=Feet/0.0929
      
      Strore the area in dRet
      print dRet
       
  STOP
*/

#include"Header.h"

double SquareMeter(int iFeet)
{
  double dMeter=0.0;
  
  if(iFeet<0)
  {
    iFeet=-iFeet;
   }
  
   dMeter=iFeet/10.764;
  
  
  return dMeter;


}








//////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : RangeSum
// Input :         Integer,Integer
// Output :        Integer
// Description :   It is use to perform addition of Even  Numbers between the given range.
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Starting number and ending number 
      Add all the Even number between the range
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
         if(iCnt%2==0)
         {
          iSum=iSum+iCnt; 
         } 
        }
     }
     
   return iSum;
}










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

int RangeSum1(int iNo1,int iNo2)
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


