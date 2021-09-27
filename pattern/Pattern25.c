//////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
//                  
//
//////////////////////////////////////////////////////////////////////

/*
 iRow=3 iCol=4
1  2  3  4
5  6  7  8
9 10  11 12

*/         

#include"Header.h"

int main()
{
  int iValue1=0,iValue2=0;
 
  printf("Enter the number of rows and columns\n");
  scanf("%d %d",&iValue1,&iValue2);

  Pattern25(iValue1,iValue2);
 

 return 0;
}