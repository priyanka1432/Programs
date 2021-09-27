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

int AddArray(int *Arr,int iSize)
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




