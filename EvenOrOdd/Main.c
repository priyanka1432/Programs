//////////////////////////////////////////////////////////////////////
//
// Checks if the number is even or not
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
 int iNo=0;
 bool bRet=false;
 
 printf("Enter number\n");
 scanf("%d",&iNo);

 bRet=CheckEven(iNo);
 if(bRet==true)
 {
   printf("%d is even number\n",iNo);
 }
 else
 {
   printf("%d is not even number\n",iNo);
 }


 return 0;
}