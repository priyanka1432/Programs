//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Display the Factors of  number
//
//////////////////////////////////////////////////////////////////////

//Input:6
//Output:1 2 3

//Input:24
//Output:1 2 3 4 6 8 12

//Input:10
//Output:1 2 5



#include"Header.h"
int main()
{
 int iNo=0;
 
 
 printf("Enter number\n");
 scanf("%d",&iNo);

 DisplayFactor(iNo);
 

 return 0;
}