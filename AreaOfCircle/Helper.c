//////////////////////////////////////////////////////////////////////////
//
// Function name : CircleArea
// Input :         float
// Output :        double
// Description :   It is used to Find Area of Circle
// Author :        Priyanka Sapakal
// Date:           16/09/2021
//
//////////////////////////////////////////////////////////////////////////

/*
  Algorithm
  
  START
      Accept  Radius as fRadius
      Find the Area
           Area=PI*fRadius*fRadius
      
      Print the Area
       
  STOP
*/

#include"Header.h"

double CircleArea(float fRadius)
{
  double dArea=0.0;
  if(fRadius<0)
   {
     fRadius=-fRadius;
    }
    
  
  dArea=PI*fRadius*fRadius;
  return dArea;


}


