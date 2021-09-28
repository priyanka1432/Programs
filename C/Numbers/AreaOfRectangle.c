////////////////////////////////////////////////////////////////////////
//
// Accept width & height of rectangle from user and calculate its area.
//
////////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  float fWidth=0.0,fHeight=0.0;
  double dArea=0.0;
 
  printf("Enter Width and Height of Rectangle \n");
  scanf("%f %f",&fWidth,&fHeight);
 
  dArea=RectangleArea(fWidth,fHeight);
  printf("Radius of the Rectangle is :%.4f\n",dArea);
 
 return 0;
}