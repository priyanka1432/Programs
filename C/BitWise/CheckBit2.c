/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept Number and position  from user and check  bit is on or off on that position.
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

    bRet=CheckBits2(iValue,iValue2);
    if(bRet == TRUE)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}