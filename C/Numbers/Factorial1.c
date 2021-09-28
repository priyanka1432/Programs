//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and perform the Factorial of number
//
//////////////////////////////////////////////////////////////////////

//Input:1
//Output:1

//Input:3
//Output:6

//Input:5
//Output:120



#include"Header.h"
int main()
{
 int iNo=0;
 UINT iRet=0;
 
 printf("Enter number\n");
 scanf("%d",&iNo);

 iRet=Factorial1(iNo);
 printf("Factorial is:%ld\n",iRet);

 return 0;
}