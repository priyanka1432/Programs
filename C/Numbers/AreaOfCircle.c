//////////////////////////////////////////////////////////////////////
//
// Accept  Radius From user and Find the Area of Circle.
//
//////////////////////////////////////////////////////////////////////



#include"Header.h"
int main()
{
  float fRadius=0.0;
  double dArea=0.0;
 
 printf("Enter Radius \n");
 scanf("%f",&fRadius);
 
 dArea=CircleArea(fRadius);
 printf("Radius of the circle is :%.4f\n",dArea);
 
 return 0;
}