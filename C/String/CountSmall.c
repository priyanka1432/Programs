/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept string from user Count of small character
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);
    
    
    iRet=SmallChar(Arr);
    printf("small letters are:%d",iRet);
    return 0;
}