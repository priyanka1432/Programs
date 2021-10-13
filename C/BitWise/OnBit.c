/*//////////////////////////////////////////////////////////
//
//  Accept one number and position from user and on  that bit. Return modified number.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    UINT iValue=0,iValue2=0,iRet=0;
    
    printf("Enter the number\n");
    scanf("%d",&iValue);

    printf("Enter position\n");
    scanf("%d",&iValue2);

    iRet=OnBit(iValue,iValue2);
    printf("%d",iRet);
    return 0;
}
*/