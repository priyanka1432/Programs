/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept Number from user and convert it into binary.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayBinary(iValue);
    return 0;
}