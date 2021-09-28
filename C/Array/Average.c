/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return its Average. 
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6 
Elements :85 66 3 80 93 88 
Output : 69.16667

*/
#include"Header.h"
int main()
{
    int iSize=0,*Arr=NULL;
    float fRet=0.0f;
    printf("Enter the Size of Array\n");
    scanf("%d",&iSize);

    Arr=(int*)malloc(iSize*sizeof(int));

    
  
   printf("Enter the elements\n");
   for(register int i=0;i<iSize;i++)
   {
       scanf("%d",&Arr[i]);
   }
   fRet=Average(Arr,iSize);
   free(Arr);

   printf("Average is:%f",fRet);

   return 0;
}