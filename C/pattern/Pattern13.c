//////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
//                  
//
//////////////////////////////////////////////////////////////////////

//Input : iRow = 3 iCol = 5
//Output : 5 4 3 2 1
//         5 4 3 2 1
//         5 4 3 2 1


#include"Header.h"

int main()
{
  int iValue1=0,iValue2=0;
 
  printf("Enter the number of rows and columns\n");
  scanf("%d %d",&iValue1,&iValue2);

  Pattern13(iValue1,iValue2);
 

 return 0;
}