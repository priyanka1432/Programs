/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept string from user and Check if it is Palindrome or not.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    char *Arr=NULL;
    BOOL iRet=0;
    Arr=(char*)malloc(30*sizeof(char));
   
   printf("Enter String\n");
   scanf("%[^'\n']s",Arr);

   Arr=(char*)realloc(Arr,strlen(Arr));

   iRet=ChkPalindrome(Arr);
   if(iRet==TRUE)
   {
   printf("It is Palindrome\n");
   }
   else
   {
       printf("It is not Palindrome\n");
   }
   return 0;
}