/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept Number and position  from user and check  bit is on or off om that position.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    UINT iValue=0,iValue2=0;
    BOOL bRet=FALSE;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter position\n");
    scanf("%d",&iValue2);

    bRet=CheckBits1(iValue,iValue2);
    if(bRet == TRUE)
    {
        printf("%dth bit is ON\n");
    }
    else
    {
        printf("bit is  OFF\n");
    }
    return 0;
}