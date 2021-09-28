//////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
//                  
//
//////////////////////////////////////////////////////////////////////

/*
 iRow=4
  iCol=5
  
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

*/         

#include"Header.h"

int main()
{
  int iValue1=0,iValue2=0;
 
  printf("Enter the number of rows and columns\n");
  scanf("%d %d",&iValue1,&iValue2);

  Pattern24(iValue1,iValue2);
 

 return 0;
}