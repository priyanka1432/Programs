/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user check whether that numbers contains 11 in  it or not.  
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
Input : N : 6 
Elements :85 66 11 80 93 88 
Output : 11 is present 
Input : N : 6 
Elements :85 66 3 80 93 88 
Output : 11 is absent 


*/


#include"Header.h"

int main()
{
  int iSize=0,*Arr=NULL;
  BOOL bRet=FALSE;
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

  bRet=Check(Arr,iSize);
  if(bRet==TRUE)
  {
      printf("11 is Present\n");
  }
  else
  {
      printf("11 is absent\n");
  }
  free(Arr);
 return 0;
}