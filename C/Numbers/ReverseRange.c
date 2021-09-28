//////////////////////////////////////////////////////////////////////////////////////////
//
// Accept range from user and display all numbers in between that range in reverse order.
//
//////////////////////////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iStart=0,iEnd=0;
 
 printf("Enter Starting point\n");
 scanf("%d",&iStart);
 
 printf("Enter Ending point\n");
 scanf("%d",&iEnd);

 ReverseRange(iStart,iEnd);
 

 return 0;
}