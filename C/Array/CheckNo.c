/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and accept one another number as NO ,check whether NO is present or not.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : TRUE
Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : FALSE


*/
#include"Header.h"
int main()
{

 int iSize=0,*Arr=NULL,iNo=0;
 BOOL bRet=FALSE;
  

 printf("Enter the number of elements\n");
 scanf("%d",&iSize);
 printf("Enter the number\n");
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
 bRet=CheckNo(Arr,iSize,iNo);
 if(bRet==TRUE)
 {
    printf("TRUE");
 }
 else{
     printf("FALSE");
 }
 
 free(Arr);
 return 0;
}