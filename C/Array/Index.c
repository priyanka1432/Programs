/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and accept one another number as NO ,return index of first occurrence of that NO.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : 1

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : -1

*/
#include"Header.h"
int main()
{

 int iSize=0,*Arr=NULL,iRet=0,iNo=0;
  

 printf("Enter the number of elements\n");
 scanf("%d",&iSize);
 printf("Enter the number \n");
 scanf("%d",&iNo);

 Arr=(int*)malloc(iSize*sizeof(int));
 if(Arr==NULL)
 {
     printf("Unable to allocate the memory\n");
     return -1;
 }

 for(register int i=0;i<iSize;i++)
 {
     scanf("%d",&Arr[i]);
 }
 iRet=FirstOcc(Arr,iSize,iNo);
 if(iRet==-1)
 {
     printf("There is no such number\n");
 }
 else
 {
     printf("First occurance of number is:%d",iRet);
 }
 

 free(Arr);
 return 0;
}