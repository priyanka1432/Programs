/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept char from user conver into small letter.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"
int main()
{
    char Arr='\0';
    char cRet='\0';

    printf("Enter the character\n");
    scanf("%c",&Arr);
    
    cRet=CapsToSmall(Arr); 
    printf("%c",cRet);
    return 0;
}