//////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           20/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Display(int iNo)
{
    register int iCnt =0;
  

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
            printf("%d\t",iCnt*2);
      }   
}

