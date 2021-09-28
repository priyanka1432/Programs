/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and return product of all odd elements.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :15 66 3 70 10 88

Output : 45
Input : N : 6

Elements :44 66 72 70 10 88

Output : 0


*/
#include"Header.h"
int main()
{

 int iSize=0,*Arr=NULL,iNo=0;
 UINT iRet=0;
  

 printf("Enter the number of elements\n");
 scanf("%d",&iSize);
 
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
 iRet=Product(Arr,iSize);
 
 printf("%ld",iRet);
 free(Arr);
 return 0;
}