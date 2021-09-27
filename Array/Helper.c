//////////////////////////////////////////////////////////////////////////
//
// Function name : AddArray
// Input :         Integer
// Description :   It is used to perform addition of array.
// Author :        Priyanka Sapakal
// Date:           22/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

int AddArray(int Arr[])
{
     int iSum=0;
     for(int iCnt=0;iCnt<5;iCnt++)
     {
       iSum=iSum+Arr[iCnt];
      }
   return iSum;
}


//////////////////////////////////////////////////////////////////////////
//
// Function name : AddArray
// Input :         Integer
// Description :   It is used to perform addition of array.
// Author :        Priyanka Sapakal
// Date:           22/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

int AdditionArray(int *Arr,int iSize)
{
     
     int iSum=0;
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
       iSum=iSum+(*Arr);
       Arr++;
      }
     
   return iSum;
}




////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Check
// Input :         Integer
// Output:         Integer
// Description :   It is use to checkArray contains 11 or not. 
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"

BOOL Check(int *Arr,int iSize)
{
     
     int iFlag=0;
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
        if((*Arr)==11)
        {
           iFlag=1;
         }
        Arr++;
      }
      
     if(iFlag==1)
     {
       return TRUE;
      }
      else
      {
       return FALSE;
      }
      
}






////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Frequency
// Input :         Integer
// Output:         Integer
// Description :   It is use to return the difference between frequency of  even number and odd numbers. 
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"

int Frequency(int *Arr,int iSize)
{
     
     int iEven=0,iOdd=0,iDiff=0;
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
        if((*Arr)%2==0)
        {
           iEven++;
         }
         else
	 {
	   iOdd++;
	 }
        Arr++;
      }
      if(iEven>iOdd)
      {
          iDiff=iEven-iOdd;
      }
      else
      {
          iDiff=iOdd-iEven;
      }
     return iDiff;
      
}



///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Difference
// Input :         Integer
// Output:         Integer
// Description :   It is use to perform the difference between even and add elements  of array.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"

int Difference(int *Arr,int iSize)
{
     
     int iEven=0,iOdd=0,iDiff=0;
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
        if(*(Arr)%2==0)
        {
           iEven=iEven+*(Arr);
         }
         else
	 {
           iOdd=iOdd+*(Arr);
	 }
        Arr++;
      }
      iDiff=iEven-iOdd;
     
   return iDiff;
}



///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Integer
// Output:         Integer
// Description :   It is use to Display the elements which are divisible by 5.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Display(int *Arr,int iSize)
{
     
     
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
        if(*(Arr)%5==0)
        {
           printf("%d\n",*Arr);
         }
        Arr++;
      }
      
}


///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Divisible
// Input :         Integer
// Output:         Integer
// Description :   It is use to Display the elements which are divisible by 3 and 5.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Divisible(int *Arr,int iSize)
{
     
     
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
        if((*Arr%5==0)&&(*Arr%3==0))
        {
           printf("%d\n",*Arr);
         }
        Arr++;
      }
      
}




///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : EvenDivisible
// Input :         Integer
// Output:         Integer
// Description :   It is use to Display the Even elements which are divisible by 5.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"

void EvenDivisible(int *Arr,int iSize)
{
     
     
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
        if((*(Arr)%5==0)&&(*Arr%2==0))
        {
           printf("%d\n",*Arr);
         }
        Arr++;
      }
      
}



///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountEven
// Input :         Integer
// Output:         Integer
// Description :   It is use to return the frequency of the Even elements.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"

int CountEven(int *Arr,int iSize)
{
     
     int i=0;
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
        if((*Arr)%2==0)
        {
           i++;
         }
        Arr++;
      }
     return i;
      
}




///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Multiple
// Input :         Integer
// Output:         Integer
// Description :   It is use to Display the elements which are divisible by 5.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Multiple(int *Arr,int iSize)
{
     
     
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
        if((*Arr)%11==0)
        {
           printf("%d\n",*Arr);
         }
        Arr++;
      }
      
}






