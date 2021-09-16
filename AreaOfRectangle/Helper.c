//////////////////////////////////////////////////////////////////////////
//
// Function name : RectangleArea
// Input :         Float,Float
// Output :        Double
// Description :   It is used to calculate Area of Rectangle
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Width and Height  as fWidth and fHeight
      Find the Area
           Area=fWidth*fHeight
      
      Print the Area
       
  STOP
*/

#include"Header.h"

double RectangleArea(float fWidth,float fHeight)
{
  double dArea=0.0;
  if(fWidth<0)
  {
    fWidth=-fWidth;
   }
   if(fHeight<0)
   {
     fHeight=-fHeight;
    }

  dArea=fWidth*fHeight;
  return dArea;


}


