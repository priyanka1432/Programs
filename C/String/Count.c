/////////////////////////////////////////////////////////////////////
//
//  Accept string from user Count of capital letters 
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include"Header.h"
int main()
{
    char Arr[20];
    int iRet=0;

    printf("Enter the string\n");
    scanf("%[^'\n']s",Arr);
    
    
    Display(Arr);
    return 0;
}