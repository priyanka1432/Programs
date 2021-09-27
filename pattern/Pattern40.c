//////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
//                  
//
//////////////////////////////////////////////////////////////////////

/*
 iRow=5 iCol=5
 1 2 3 4 5
 1 2     5
 1   3   5
 1     4 5
 1 2 3 4 5
*/         

#include"Header.h"

int main()
{
  int iValue1=0,iValue2=0;
 
  printf("Enter the number of rows and columns\n");
  scanf("%d %d",&iValue1,&iValue2);

  Pattern40(iValue1,iValue2);
 

 return 0;
}