/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and accept one another number as NO ,return frequency of NO form it.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6

NO: 66
Elements :85 66 3 66 93 88

Output : 2
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : 0


*/
#include"Header.h"
int main()
{

 int iSize=0,*Arr=NULL,iRet=0,iNo=0;
  

 printf("Enter the number of elements\n");
 scanf("%d",&iSize);
 printf("Enter the number of which u want to calculate the frequency\n");
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
 iRet=FrequencyNo(Arr,iSize,iNo);
 
 printf("%d",iRet);
 free(Arr);
 return 0;
}