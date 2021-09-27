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



