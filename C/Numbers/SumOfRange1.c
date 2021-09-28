/////////////////////////////////////////////////////////////////////////////
//
// Accept range from user and display sum of numbers in between that range.
//
/////////////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  int iStart=0,iEnd=0,iRes=0;
 
  printf("Enter Starting point\n");
  scanf("%d",&iStart);
 
  printf("Enter Ending point\n");
  scanf("%d",&iEnd);

  iRes=RangeSum(iStart,iEnd);

  if(iRes==0)
  {
    printf("Invalid Range\n");
   }
  else
  {
    printf("%d",iRes);
  }
 

  return 0;
}