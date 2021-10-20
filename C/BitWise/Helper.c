#include"Header.h"





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














//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckBit
// Input :         Integer
// Output:        
// Description :   It is use to Check 4th bit is on or off.
// Author :        Priyanka Sapakal
// Date:           12/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////



BOOL CheckBit(UINT iNo)
{
    UINT iMask=0x00000008;
    UINT iResult=0;

    iResult=iMask&iNo;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }   
    
}






















//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckBits
// Input :         Integer
// Output:        
// Description :   It is use to Check 7th and 12th bit is on or off.
// Author :        Priyanka Sapakal
// Date:           12/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


BOOL CheckBits(UINT iNo)
{
    UINT iMask=0x00000840;
    UINT iResult=0;

    iResult=iMask&iNo;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }   
    
}

























//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Check21Bit
// Input :         Integer
// Output:        
// Description :   It is use to Check 21 bit is on or off.
// Author :        Priyanka Sapakal
// Date:           12/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////



BOOL Check21Bit(UINT iNo)
{
    UINT iMask=0x00100000;
    UINT iResult=0;

    iResult=iMask&iNo;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
   
}

















//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckBits
// Input :         Integer
// Output:        
// Description :   It is use to Check 7th and 12th bit is on or off.
// Author :        Priyanka Sapakal
// Date:           12/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////



BOOL CheckNibble(UINT iNo)
{
    UINT iMask=0x0000000F;
    UINT iResult=0;

    iResult=iMask&iNo;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }   
    
}























//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckBits1
// Input :         Integer,Integer
// Output:          Boolean
// Description :   It is use to Check  bit is on or off on the given position.
// Author :        Priyanka Sapakal
// Date:           12/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////



BOOL CheckBits1(UINT iNo1,int iPos)
{
    UINT iMask=0x00000001;
    UINT iResult=0;
    if((iPos<1)||(iPos>32))
    {
        return FALSE;
    }

    iMask=iMask<<(iPos-1);
    iResult=iMask&iNo1;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }   
    
}

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckBits1
// Input :         Integer,Integer
// Output:          Boolean
// Description :   It is use to Check  bit is on or off on the given position.
// Author :        Priyanka Sapakal
// Date:           12/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////



BOOL CheckBits2(UINT iNo1,int iPos)
{
    UINT iMask=0x00000001;
    UINT iResult=0;
    if((iPos<1)||(iPos>32))
    {
        return FALSE;
    }

    iMask=iMask<<(iPos-1);
    iResult=iMask&iNo1;
    if(iResult==iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }   
    
}












































//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : OffBit
// Input :         Integer,Integer
// Output:         Integer
// Description :   It is use to on the bit
// Author :        Priyanka Sapakal
// Date:           12/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////



UINT OffBit(UINT iNo1,int iPos)
{
    UINT iMask=0x00000001;
    UINT iResult=0;
    if((iPos<1)||(iPos>32))
    {
        return 0;
    }

    iMask=iMask<<(iPos-1);
    iResult=iMask^iNo1;
    return iResult;   
}




































