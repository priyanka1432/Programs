/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept characters  from user and Check it is alphabet or not(A-Za-z).
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"
int main()
{
    char ch1='\0';
    
    BOOL bRet=FALSE;
   
    printf("Enter Character\n");
    scanf("%c",&ch1);

   
  bRet=chkAlpha(ch1);
  if(bRet==TRUE)
  {
      printf("True\n");
  }
  else
  {
      printf("False\n");
  }
   return 0;
}