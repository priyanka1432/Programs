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
  
    if(iNo<0)
    {
      iNo=-iNo;
     }

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
            printf("*\t");
      }

}
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

void Pattern2(int iNo)
{
    register int iCnt =0;
  
    if(iNo<0)
    {
      iNo=-iNo;
     }

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
            printf("%d  * \t",iCnt);
      }   
}


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

void Pattern3(int iNo)
{
    register int iCnt =0;
  
    if(iNo<0)
    {
      iNo=-iNo;
     }

     for(iCnt=iNo;iCnt>=1;iCnt--)
     {
            printf("%d\t",iCnt);
      }   
}





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern4
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           20/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern4(int iNo)
{
    register int iCnt =0;
  

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
            printf("%d\t",iCnt*2);
      }   
}


//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern5
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           20/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern5(int iNo)
{
    register int iCnt =0;
  

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {

            if(iCnt%2==0)
             {
               printf("#\t");
             }
             else
             {
               printf("*\t");
             }
      }   
}





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern6
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           20/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern6(int iNo)
{
    register int iCnt =0;
     iNo=iNo+64;

     for(iCnt=65;iCnt<=iNo;iCnt++)
     {
          printf("%c\t",iCnt);
          
      }   
}



