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
// Function name : Pattern2
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
// Function name : Pattern3
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





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern7
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern7(int iNo)
{
    register int iCnt =0;
     

     for(iCnt=iNo;iCnt>=1;iCnt--)
     {
          printf("%d  # \t",iCnt);
          
      }   
}



//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern8
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern8(int iNo)
{
    register int iCnt =0;
     

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
          printf("%d  *\t",iCnt);
          
      }   
}



//////////////////////////////////////////////////////////////////////////
//
// Function name :Pattern9
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern9(int iNo)
{
    register int iCnt =0;
     

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
          printf("#  %d  *  \t",iCnt);
          
      }   
}





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern10
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern10(int iNo)
{
    register int iCnt =0;
     

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
          printf("%d\t",iCnt*2);
          
      }   
}



//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern11
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern11(int iRows,int iCol)
{
      register int i =0,j=0;    

      for(i=1;i<=iRows;i++)
      {
         for(j=1;j<=iCol;j++)
         {
            printf("*  ");    
         } 
         printf("\n");  
          
      }   
}



//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern12
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern12(int iRows,int iCol)
{
     register int i =0,j=0;
     

     for(i=1;i<=iRows;i++)
     {
         for(j=1;j<=iCol;j++)
        {
          printf("%d ",j);    
         } 
         printf("\n");  
          
      }   
}




//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern13
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern13(int iRows,int iCol)
{
     register int i =0,j=0;
     

     for(i=1;i<=iRows;i++)
     {
         for(j=iCol;j>=1;j--)
        {
          printf("%d ",j);    
         } 
         printf("\n");  
          
      }   
}




//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern14
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern14(int iRows,int iCol)
{
     register int i =0,j=0;
     

     for(i=1;i<=iRows;i++)
     {
         for(j=iCol;j>=1;j--)
         {
            if(j%2==0)
            {
              printf("#  ");
            }
            else
            {
               printf("*  ");
             } 
         } 
         printf("\n");  
          
      }   
}




//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern15
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern15(int iRows,int iCol)
{
     register int i =0,j=0;
     

     for(i=1;i<=iRows;i++)
     {
         for(j=1;j<=iCol;j++)
        {
          printf("%d ",i);    
         } 
         printf("\n");  
          
      }   
}





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern16
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           20/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern16(int iNo)
{
    register int iCnt =0;
     char ch='a';

     for(iCnt=1;iCnt<=iNo;iCnt++)
     {
          printf("%c\t",ch);
          ch++;
          
      }   
}


//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern17
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern17(int iRows,int iCol)
{
     register int i =0,j=0;
     

     for(i=1;i<=iRows;i++)
     {
         for(j=1;j<=iCol;j++)
         { 
           if(i==j)
           {
             printf("$\t");   
            }
           else
            {
              printf("*\t");
             }    
         } 
         printf("\n");  
          
      }   
}





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern18
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern18(int iRows,int iCol)
{
     register int i =0,j=0;
     

     for(i=1;i<=iRows;i++)
     {
         for(j=1;j<=iCol;j++)
         { 
           if(i%2==0)
           {
             printf("*\t");   
            }
           else
            {
              printf("#\t");
             }    
         } 
         printf("\n");  
          
      }   
}







//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern19
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern19(int iRows,int iCol)
{
     register int i =0,j=0;
     

     for(i=1;i<=iRows;i++)
     {
         for(j=1;j<=iCol;j++)
         { 
           if(i==j)
           {
             printf("$\t");   
            }
           else if(i<j)
            {
              printf("#\t");
             }
             else
	     {
		 printf("*\t");
	      }   
         } 
         printf("\n");  
          
      }   
}



//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern20
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern20(int iRows,int iCol)
{
     register int i =0,j=0;
       

     for(i=1;i<=iRows;i++)
     {
         for(j=1;j<=iCol;j++)
         { 
           if(i>=j)
           {
             printf("*\t");   
            }
           
         } 
         printf("\n");  
          
      }   
}


//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern21
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern21(int iRows,int iCol)
{
     register int i =0,j=0;
       
     
     for(i=1;i<=iRows;i++)
     {
        char ch='A';
         for(j=1;j<=iCol;j++)
         { 
           printf("%c\t",ch);
           ch++;
           
         } 
         printf("\n");  
          
      }   
}




//////////////////////////////////////////////////////////////////////////
//
// Function name :Pattern22
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern22(int iRows,int iCol)
{
     register int i =0,j=0;
       
     char ch='A';
     for(i=1;i<=iRows;i++)
     {
         if(i%2==0)
	 {
	   ch='a';
	 }
	 else
	 {
	   ch='A';
	 }
         for(j=1;j<=iCol;j++)
         { 
           printf("%c\t",ch);
           ch++;
           
         } 
         printf("\n");  
          
      }   
}





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern23
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////



void Pattern23(int iRows,int iCol)
{
     register int i =0,j=0;
       
     char ch='A';
     for(i=1;i<=iRows;i++)
     {
        
         for(j=1;j<=iCol;j++)
         { 
           printf("%c\t",ch);
           
           
         }
	 ch++; 
         printf("\n");  
          
      }   
}




//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern24
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern24(int iRows,int iCol)
{
     register int i =0,j=0;
       
     
     for(i=iRows;i>=1;i--)
     {
        
         for(j=1;j<=iCol;j++)
         { 
           printf("%d\t",i);
           
           
         }
	 
         printf("\n");  
          
      }   
}





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern25
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern25(int iRows,int iCol)
{
     register int i =0,j=0;
       
     int iCnt=1;
     for(i=1;i<=iRows;i++)
     {
        
         for(j=1;j<=iCol;j++)
         { 
           printf("%d\t",iCnt);
           iCnt++;
           
         }
	 
         printf("\n");  
          
      }   
}


//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern26
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern26(int iRows,int iCol)
{
     register int i =0,j=0;
       
     
     for(i=1;i<=iRows;i++)
     {
        
         for(j=1;j<=iCol;j++)
         { 
           if(i>=j)
	   {
	     printf("*\t");
	    }
	    else
	    {
 	       printf("#\t");
	    }
 
           
         }
	 
         printf("\n");  
          
      }   
}





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern27
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern27(int iRows,int iCol)
{
     register int i =0,j=0;
       
     
     for(i=iRows;i>=1;i--)
     {
        
         for(j=1;j<=iCol;j++)
         { 
           if(i>=j)
	   {
	     printf("*\t");
	    }
	    else
	    {
 	       printf("#\t");
	    }
 
           
         }
	 
         printf("\n");  
          
      }   
}




//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern28
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern28(int iRows,int iCol)
{
     register int i =0,j=0;
     if(iRows!=iCol)
     {
       return;
      }
     
     for(i=1;i<=iRows;i++)
     {
        
         for(j=1;j<=iCol;j++)
         { 
           if(i==j)
	   {
	     printf("$\t");
	    }
	    else
	    {
 	       printf("*\t");
	    }
 
           
         }
	 
         printf("\n");  
          
      }   
}







//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern29
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern29(int iRows,int iCol)
{
     register int i =0,j=0;
     
     
     for(i=1;i<=iRows;i++)
     {
        
         for(j=1;j<=iCol;j++)
         { 
           if(i==1||j==1||i==iCol||i==iRows||j==iCol)
	   {
	     printf("*\t");
	    }
	    else
	    {
 	       printf("@\t");
	    }
 
           
         }
	 
         printf("\n");  
          
      }   
}





//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern30
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern30(int iRows,int iCol)
{
     register int i =0,j=0;
     int iCnt=0;
     
     for(i=1;i<=iRows;i++)
     {
         iCnt=1;
         for(j=1;j<=iCol;j++)
         { 
           if(i==1||j==1||i==iCol||i==iRows||j==iCol)
	   {
	     printf("%d\t",iCnt);
             
	    }
	    else
	    {
 	       printf("*\t");
	    }
  	    iCnt++;
           
         }
	 
         printf("\n");  
          
      }   
}




//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern31
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern31(int iRows,int iCol)
{
     register int i =0,j=0;
     
     
     for(i=1;i<=iRows;i++)
     {
       for(j=1;j<=i;j++)
       {
             printf("*\t");
        }	 
         printf("\n");  
          
      }   
}







//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern32
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern32(int iRows,int iCol)
{
     register int i =0,j=0;
     
     
     for(i=iRows;i>=1;i--)
     {
       for(j=1;j<=i;j++)
       {
             printf("*\t");
        }	 
         printf("\n");  
          
      }   
}



//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern33
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern33(int iRows,int iCol)
{
     register int i =0,j=0;
     
     if(iRows!=iCol)
     {
        return;
      }
     for(i=1;i<=iRows;i++)
     {
       for(j=1;j<=iCol;j++)
       {
             if(i>j)
             {
		printf("#\t");
	      }
 	      else if(i==j)
	      {
	         printf("$\t");
	       }
	       else
	       {
                  printf("*\t"); 
               } 
        }	 
         printf("\n");  
          
      }   
}




//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern34
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           21/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern34(int iRows,int iCol)
{
     register int i =0,j=0;
     
     if(iRows!=iCol)
     {
        return;
      }
     for(i=1;i<=iRows;i++)
     {
       for(j=1;j<=iCol;j++)
       {
            if(i==1||j==1||i==iRows||j==iCol||i==j)
	     {
                 printf("*\t");
	      }
              else
              {
                printf(" \t");
              }
        }	 
         printf("\n");  
          
      }   
}






//////////////////////////////////////////////////////////////////////////
//
// Function name :Pattern35
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           22/09/2021
//
//////////////////////////////////////////////////////////////////////////




void Pattern35(int iRows,int iCol)
{
     register int i =0,j=0;
     
     if(iRows!=iCol)
     {
        return;
      }
     for(i=1;i<=iRows;i++)
     {
       for(j=1;j<=iCol;j++)
       {
            if(j>=i)
	     {
                 printf("%d\t",j);
	      }
              else
              {
                printf(" \t");
              }
        }	 
         printf("\n");  
          
      }   
}




//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern36
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern36(int iRows,int iCol)
{
     register int i =0,j=0;
     
     if(iRows!=iCol)
     {
        return;
      }
     for(i=1;i<=iRows;i++)
     {
       for(j=1;j<=iCol;j++)
       {
            if(j==(iCol-i+1))
	     {
                 printf("#\t");
	      }
              else
              {
                printf("*\t");
              }
        }	 
         printf("\n");  
          
      }   
}









//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern37
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern37(int iRows,int iCol)
{
     register int i =0,j=0;
     
     if(iRows!=iCol)
     {
        return;
      }
     for(i=1;i<=iRows;i++)
     {
       for(j=1;j<=iCol;j++)
       {
            if(j==(iCol-i+1))
	     {
                 printf("#\t");
	      }
              else if(j>(iCol-i+1))
              {
                printf("@\t");
              }
              else
	       {
	          printf("*\t");
	        }
        }	 
         printf("\n");  
          
      }   
}








//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern38
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern38(int iRows,int iCol)
{
     register int i =0,j=0;
     
     if(iRows!=iCol)
     {
        return;
      }
     for(i=1;i<=iRows;i++)
     {
       for(j=1;j<=iCol;j++)
       {
            if(j==(iCol-i+1)||i==1||j==1||i==iRows||j==iCol)
	     {
                 printf("*\t");
	      }
              else
	       {
	          printf(" \t");
	        }
        }	 
         printf("\n");  
          
      }   
}







//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern39
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern39(int iRows,int iCol)
{
     register int i =0,j=0;
     
     if(iRows!=iCol)
     {
        return;
      }
     for(i=1;i<=iRows;i++)
     {
       for(j=1;j<=iCol;j++)
       {
            if(j==(iCol-i+1)||i==1||j==1||i==iRows||j==iCol)
	     {
                 printf("*\t");
	      }
              else if(j>(iCol-i+1))
	       {
	          printf("$\t");
	       }
               else
               {
                 printf("#\t");
                }
        }	 
         printf("\n");  
          
      }   
}






//////////////////////////////////////////////////////////////////////////
//
// Function name : Pattern40
// Input :         Integer
// Description :   It is use to Display Pattern.
// Author :        Priyanka Sapakal
// Date:           24/09/2021
//
//////////////////////////////////////////////////////////////////////////


#include"Header.h"

void Pattern40(int iRows,int iCol)
{
     register int i =0,j=0;
     
     if(iRows!=iCol)
     {
        return;
      }
     for(i=1;i<=iRows;i++)
     {
       for(j=1;j<=iCol;j++)
       {
            if(i==1||j==1||i==iRows||j==iCol||i==j)
	     {
                 printf("%d\t",j);
	      }
               else
               {
                 printf(" \t");
                }
        }	 
         printf("\n");  
          
      }   
}

