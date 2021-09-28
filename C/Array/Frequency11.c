/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return frequency of 11 form it. 
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :85 66 3 15 93 88

Output : 0
Input : N : 6

Elements :85 11 3 15 11 111

Output : 2


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
 iRet=Frequency11(Arr,iSize);
 
 printf("%d",iRet);
 free(Arr);
 return 0;
}