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

///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Average
// Input :         Integer
// Output:         Integer
// Description :   It is use to Display the elements which are divisible by 5.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
float Average(int *Arr,int iSize )
{
   int iSum=0;
   float fAvg=0.0;
   for(int i=0;i<iSize;i++)
   {
      iSum=iSum+*(Arr);
      (Arr)++;
   }
   fAvg=(float)iSum/iSize;
   return fAvg;
}


///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Check11
// Input :         Integer
// Output:         Integer
// Description :   It is use to check 11 is present or not.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


BOOL Check11(int *Arr,int iSize )
{
   BOOL flag=FALSE;
   float fAvg=0.0;
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)==11)
      {
         flag=TRUE;
         break;
      }
      else
      {
        flag=FALSE; 
      }

      (Arr)++;
   }
   
   return flag;
}











///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name :Frequency11
// Input :         Integer
// Output:         Integer
// Description :   It is use to Count frequency of 11.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


int Frequency11(int *Arr,int iSize )
{
   int iCount=0;
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)==11)
      {
         iCount++;
      }

      (Arr)++;
   }
   
   return iCount;
}







///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : FrequencyNo
// Input :         Integer
// Output:         Integer
// Description :   It is use to count frequency of the number.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


int FrequencyNo(int *Arr,int iSize,int iNo )
{
   int iCount=0;
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)==iNo)
      {
         iCount++;
      }

      (Arr)++;
   }
   
   return iCount;
}






///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckNo
// Input :         Integer
// Output:         Integer
// Description :   It is use to check Number is present or not.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


BOOL CheckNo(int *Arr,int iSize,int iNo )
{
   BOOL flag=FALSE;
   float fAvg=0.0;
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)==iNo)
      {
         flag=TRUE;
         break;
      }
      else
      {
        flag=FALSE; 
      }

      (Arr)++;
   }
   
   return flag;
}





///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : FirstOcc
// Input :         Integer
// Output:         Integer
// Description :   It is use to return index of first occurrence of that NO.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


int FirstOcc(int *Arr,int iSize,int iNo )
{
   int iIndex=0;
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)==iNo)
      {
        iIndex=i;
        break;
      }
      else
      {
         iIndex=-1;
      }

      (Arr)++;
   }
   
   return iIndex;
}







///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : LastOcc
// Input :         Integer
// Output:         Integer
// Description :   It is use to return index of first occurrence of that NO.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


int LastOcc(int *Arr,int iSize,int iNo )
{
   int iIndex=0;
   for(int i=iSize-1;i>=0;i--)
   {
      if((*(Arr+i))==iNo)
      {
        iIndex=i;
        break;
      }
      else
      {
         iIndex=-1;
      }

      
   }
   
   return iIndex;
}







///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : range
// Input :         Integer
// Output:         Integer
// Description :   It is use to Display all elements from that range.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


void range(int *Arr,int iSize,int iStart,int iEnd )
{
   
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)>iStart && (*Arr)<iEnd)
      {
        printf("%d\t",*Arr);
      }
      Arr++;
      
   }
   
   
}








//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Product
// Input :         Integer
// Output:         Integer
// Description :   It is use to perform multiplication of odd numbers.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


UINT Product (int *Arr,int iSize)
{
   UINT iProduct=1;
   BOOL bFlag=FALSE;
   for(int i=0;i<iSize;i++)
   {
      if(((*Arr)%2)!=0)
      {
         iProduct=iProduct*(*Arr);
         bFlag=TRUE;
        
      }
      Arr++;
      
   }
   
   if(bFlag==FALSE)
   {
      return 0;
   }
   else
   {
       return iProduct;
   }
   
   
}













//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Largest
// Input :         Integer
// Output:         Integer
// Description :   It is used to find the Largest number.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


int  Largest (int *Arr,int iSize)
{
   int iLarge=0;
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)>iLarge)
      {
         iLarge=(*Arr);
        
      }
      Arr++;
      
   }
   
return iLarge; 
}







//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Smallest
// Input :         Integer
// Output:         Integer
// Description :   It is used to find the Smallest number.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


int  Smallest(int *Arr,int iSize)
{
   int iSmall=Arr[0];
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)<iSmall)
      {
         iSmall=(*Arr);
        
      }
      Arr++;
      
   }
   
return iSmall; 
}






//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Diff
// Input :         Integer
// Output:         Integer
// Description :   It is used to find the diffrence between Smallest number and largest number.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


int  Diff(int *Arr,int iSize)
{
   int iSmall=Arr[0],iLarge=0,iDiff=0;
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)<iSmall)
      {
         iSmall=(*Arr);
        
      }
      else if((*Arr)>iLarge)
      {
         iLarge=(*Arr);
      }
      Arr++;
      
   }
   iDiff=iLarge-iSmall;
   
return iDiff; 
}








//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Digit3
// Input :         Integer
// Output:         Integer
// Description :   It is used to Display numbers which contains 3 digits in it.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


void Digit3(int *Arr,int iSize)
{
   
   for(int i=0;i<iSize;i++)
   {
      if((*Arr)>99)
      {
         printf("%d\t",*Arr);
        
      }
      Arr++;
      
   }
  
}








//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : AddDigit
// Input :         Integer
// Output:         Integer
// Description :   It is used to display summation of digits of each number.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


void AddDigit(int *Arr,int iSize)
{
   
   for(int i=0;i<iSize;i++)
   {
      int iDigit=0,iNo=0,iSum=0;
      iNo=(*Arr);
      while(iNo!=0)
      {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
      }
      printf("%d\t",iSum);
      Arr++;  
   }
  
}




///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : LastOcc
// Input :         Integer
// Output:         Integer
// Description :   It is use to return index of first occurrence of that NO.
// Author :        Priyanka Sapakal
// Date:           28/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


int LastOcc1(int *Arr,int iSize,int iNo )
{
   int iIndex=-1;
   for(int i=0;i<iSize;i++)
   {
      if((*(Arr)==iNo)
      {
        iIndex=i;
        
      }
      Arr++;
        
   }

   
   return iIndex;
}




