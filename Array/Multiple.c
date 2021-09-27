/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept N numbers from user and display all such elements which are  multiples of 11. 
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*Input : N : 6 
Elements :85 66 3 55 93 88 
Output : 66 55 88 

*/


#include"Header.h"

int main()
{
  int iSize=0,*Arr=NULL;
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

  Multiple(Arr,iSize);
  free(Arr);
 return 0;
}