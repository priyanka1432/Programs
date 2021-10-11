/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept string from user and display the number of vowels in the string. 
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    char *Arr=NULL;
    UINT iRet=0;
    Arr=(char*)malloc(30*sizeof(char));
   
   printf("Enter String\n");
   scanf("%[^'\n']s",Arr);

   Arr=(char*)realloc(Arr,strlen(Arr));

   iRet=Count(Arr);
   printf("Number of vowels are:%d\n",iRet);
   return 0;
}