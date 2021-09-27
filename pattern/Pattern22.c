//////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
//                  
//
//////////////////////////////////////////////////////////////////////

/*
 iRow=4
  iCol=4
  
 A B C D
 a b c d
 A B C D
 a b c d
*/         

#include"Header.h"

int main()
{
  int iValue1=0,iValue2=0;
 
  printf("Enter the number of rows and columns\n");
  scanf("%d %d",&iValue1,&iValue2);

 Pattern22(iValue1,iValue2);
 

 return 0;
}