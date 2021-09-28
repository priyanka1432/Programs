//////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
//                  
//
//////////////////////////////////////////////////////////////////////

//Input:4
//Output:1 * 2 * 3 *  4 * 

//Input:5
//Output:1 * 2 * 3 *  4 * 5 *

#include"Header.h"

int main()
{
  int iValue=0;
 
  printf("Enter the number\n");
  scanf("%d",&iValue);

  Pattern2(iValue);
 

 return 0;
}