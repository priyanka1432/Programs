//////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
//                  
//
//////////////////////////////////////////////////////////////////////

//Input:5
//Output:* * * * *

//Input:7
//Output:* * * * * * *

#include"Header.h"

int main()
{
  int iValue=0;
 
  printf("Enter the number\n");
  scanf("%d",&iValue);

  Display(iValue);
 

 return 0;
}