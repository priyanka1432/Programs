/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept Number from user and check 7th and 12th bit is on or off.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=CheckBits(iValue);
    if(bRet == TRUE)
    {
        printf("7th and 12th bit is ON\n");
    }
    else
    {
        printf("bits are  OFF\n");
    }
    return 0;
}