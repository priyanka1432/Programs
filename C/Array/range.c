/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and accept Range, Display all elements from that range
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88

Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88

Output :

*/
#include"Header.h"
int main()
{

 int iSize=0,*Arr=NULL,iStart=0,iEnd=0;
  

 printf("Enter the number of elements\n");
 scanf("%d",&iSize);
 printf("Enter the Starting point \n");
 scanf("%d",&iStart);
 printf("Enter the Ending point \n");
 scanf("%d",&iEnd);

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
 range(Arr,iSize,iStart,iEnd);
 
 free(Arr);
 return 0;
}