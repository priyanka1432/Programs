/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and return difference between frequency of  even number and odd numbers. 
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 7 
Elements :85 66 3 80 93 88 90 
Output : 1 (4 -3) 


*/


#include"Header.h"

int main()
{
  int iSize=0,*Arr=NULL,iRet=0;
  printf("Enter the size of the array\n");
  scanf("%d",&iSize);
  
  Arr=(int*)malloc(iSize*sizeof(int));

  if(Arr==NULL)
   {
     printf("Unable to allocate the memory");
     return -1;
    }


  for(int i=0;i<iSize;i++)
  {
    scanf("%d",Arr+i);
  }

  iRet=Frequency(Arr,iSize);
  printf("%d\n",iRet);
  free(Arr);
 return 0;
}