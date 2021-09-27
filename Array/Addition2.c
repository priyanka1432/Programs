//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and display its addition .
//                  
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"

int main()
{
  int *Arr=NULL;
  int iRet=0,iSize;

  printf("Enter the size of arry\n");
  scanf("%d",&iSize);

  Arr=(int*)malloc(iSize*sizeof(int));

  for(int iCnt=0;iCnt<iSize;iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }
  
  iRet=AdditionArray(Arr,iSize);
  printf("%d",iRet);
  free(Arr);

 return 0;
}