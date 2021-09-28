//////////////////////////////////////////////////////////////////////
//
// Accept number from user and display below pattern.
//                  
//
//////////////////////////////////////////////////////////////////////

//Input : iRow = 4 iCol = 3
//Output : * * *
//         * * *
//         * * *
// 	   * * *


#include"Header.h"

int main()
{
  int iValue1=0,iValue2=0;
 
  printf("Enter the number of rows and columns\n");
  scanf("%d %d",&iValue1,&iValue2);

 Pattern11(iValue1,iValue2);
 

 return 0;
}

