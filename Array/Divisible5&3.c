/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and display all such elements which are  divisible by 3 and  5. 
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*Input : N : 6 
Elements :85 66 3 15 93 88 
Output : 15 
*/


#include"Header.h"

int main()
{
  int iSize=0,*Arr=NULL;
  printf("Enter the size of the array\n");
  scanf("%d",&iSize);
  
  Arr=(int*)malloc(iSize*sizeof(int));
  for(int i=0;i<iSize;i++)
  {
    scanf("%d",Arr+i);
  }

  Divisible(Arr,iSize);
  free(Arr);

 return 0;
}