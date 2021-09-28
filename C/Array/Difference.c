/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*Input : N : 6

Elements :85 66 3 80 93 88

Output : 53 (234 - 181)*/


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
  
  iRet=Difference(Arr,iSize);
  if(iRet<0)
  {
    iRet=-iRet;
   }
  printf("%d",iRet);
  free(Arr);

 return 0;
}