/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept char from user and check if it is capital 
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"
int main()
{
    char Arr='\0';
    BOOL iRet=0;

    printf("Enter the character\n");
    scanf("%c",&Arr);
    
    iRet=CheckCaps(Arr);
    
    if(iRet==TRUE)
    {
        printf("It is Capital");
    }
    else
    {
        printf("It is  not Capital");
    }
    return 0;
}