/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept Number from user and check last 4 bits is on or off.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    UINT iValue=0;
    BOOL bRet=FALSE;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    bRet=CheckNibble(iValue);
    if(bRet == TRUE)
    {
        printf("first 4 bits are ON\n");
    }
    else
    {
        printf("first 4  bits are  OFF\n");
    }
    return 0;
}