/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and return the largest number.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :85 66 3 66 93 88

Output : 93


*/
#include"Header.h"
int main()
{

 int iSize=0,*Arr=NULL,iRet=0;
 
  

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
 iRet=Largest(Arr,iSize);
 
 printf("%d",iRet);
 free(Arr);
 return 0;
}