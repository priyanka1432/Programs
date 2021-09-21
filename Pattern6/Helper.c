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
     iNo=iNo+64;

     for(iCnt=65;iCnt<=iNo;iCnt++)
     {
          printf("%c\t",iCnt);
          
      }   
}


