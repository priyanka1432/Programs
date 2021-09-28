/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and display summation of digits of each number.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :8225 665 3 76 953 858

Output : 17 17 3 13 17 21

*/
#include"Header.h"
int main()
{

 int iSize=0,*Arr=NULL;
  

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
 AddDigit(Arr,iSize);
 
 
 free(Arr);
 return 0;
}