/////////////////////////////////////////////////////////////////////////////
//
// Accept range from user and display all Even numbers in between that range.
//
/////////////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iStart=0,iEnd=0;
 
 printf("Enter Starting point\n");
 scanf("%d",&iStart);
 
 printf("Enter Ending point\n");
 scanf("%d",&iEnd);

 EvenRange(iStart,iEnd);
 

 return 0;
}