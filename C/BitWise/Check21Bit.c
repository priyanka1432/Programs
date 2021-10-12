/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept Number from user and check 21th bit is on or off.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=Check21Bit(iValue);
    if(bRet == TRUE)
    {
        printf("21th bit is ON\n");
    }
    else
    {
        printf("21th bit is OFF\n");
    }
    return 0;
}