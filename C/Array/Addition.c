//////////////////////////////////////////////////////////////////////
//
// Accept 5 numbers from user and display its addition .
//                  
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"

int main()
{
  int Arr[5],iRet=0;
  for(int i=0;i<5;i++)
  {
    scanf("%d",&Arr[i]);
  }
  
  iRet=AddArray(Arr);
  printf("%d",iRet);

 return 0;
}