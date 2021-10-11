/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept string and character from user and display the number of character in the string. 
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    char *Arr=NULL;
    UINT iRet=0;
    char cValue='\0';
    Arr=(char*)malloc(30*sizeof(char));
   
   printf("Enter String\n");
   scanf("%[^'\n']s",Arr);

   Arr=(char*)realloc(Arr,strlen(Arr));

   printf("Enter the character\n");
   scanf(" %c",&cValue);

   iRet=CountChar(Arr,cValue);
   printf("Number of %c are:%d\n",cValue,iRet);
   return 0;
}