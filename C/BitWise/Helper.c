//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : DisplayBinary
// Input :         Integer
// Output:        
// Description :   It is use to convert Decimal to Binary
// Author :        Priyanka Sapakal
// Date:           12/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

void DisplayBinary(int iNo)
{
    int iDigit=0;
   while(iNo>0)
   {
     iDigit=iNo%2;
     printf("%d",iDigit);
     iNo=iNo/2;
   }
}