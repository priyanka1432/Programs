//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Check Number is Palindrome or not
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iNo=0;
  BOOL bRet=FALSE;
 
 printf("Enter number\n");
 scanf("%d",&iNo);
 
 bRet=CheckPalindrome(iNo);

 
 if(bRet==TRUE)
 {
   printf("It is Palindrome\n");
  }
  else
  {
     printf("It is not Palindrome\n");
  }
 
 return 0;
}