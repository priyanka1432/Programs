///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : strlen
// Input :         String
// Output:         Integer
// Description :   It is use to return length of the string.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

UINT strlenX(char *str)
{
    int iCnt=0;

    if(str==NULL)
    {
        return 0;
    }
    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}







///////////////////////////////////////////////
//
// Function name : DisplayTable
// 
// Description :   It is use to Display Ascii table.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////////




void DisplayTable()
{
   int i=0;

    printf("ASCII table is \n");
    printf("**************************************");
    printf("Decimal \t Character\n");
    ("**************************************");
    for(int i=0;i<=127;i++)
    {
        printf("%d\t%c\n",i,i);
    }
}




///////////////////////////////////////////////
//
// Function name : DisplayTable1
// 
// Description :   It is use to Display Ascii table.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
///////////////////////////////////////////////////////////////////////////////////////////////




void DisplayTable1()
{
   int i=0;

    printf("ASCII table is \n");
    printf("**************************************");
    printf("Decimal \t Character\n");
    ("**************************************");
    for(int i=0;i<=127;i++)
    {
        printf("%d\t%c\n",i,i);
    }
}



















///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckCaps
// Input :         char
// Output:         Integer
// Description :   It is use check the character is capital.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

BOOL CheckCaps(char str)
{
    

    if(str>='A' && str<='Z')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}



///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CapsToSmall
// Input :         char
// Output:         Integer
// Description :   It is use to convert Capital to small.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

int CapsToSmall(char str)
{
    

    if(str>='A' && str<='Z')
    {
        return str+32;
    }
   
    
}















///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CharToggle
// Input :         char
// Output:         Integer
// Description :   It is use to convert Capital to small and small to capital.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

int CharToggle(char str)
{
    

    if(str>='A' && str<='Z')
    {
        return str+32;
    }
    else if(str>='a'&&str<='z')
    {
        return str-32;
    }
   
    
}












///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountSmall
// Input :         String
// Output:         Integer
// Description :   It is use to return count of small characters.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

UINT SmallChar(char *str)
{
    int iCnt=0;

    if(str==NULL)
    {
        return 0;
    }
    while(*str!='\0')
    {
        if((*str>='a')&& (*str<='z'))
        {
        iCnt++;
        }
        str++;
        
    }
    return iCnt;
}




























///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountCaps
// Input :         String
// Output:         Integer
// Description :   It is use to return count of small characters.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

UINT CountCaps(char *str)
{
    int iCnt=0;

    if(str==NULL)
    {
        return 0;
    }
    while(*str!='\0')
    {
        if((*str>='A')&& (*str<='Z'))
        {
        iCnt++;
        }
        str++;
        
    }
    return iCnt;
}































///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Input :         String
// Description :   It is use to Display count of Capital letters and small letters.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

void Display(char *str)
{
    int iCnt=0,sCount=0;


    
    while(*str!='\0')
    {
        if((*str>='A')&& (*str<='Z'))
        {
        iCnt++;
        }
        else if((*str>='a')&& (*str<='z'))
        {
            sCount++;
        }
        str++;
        
    }
    printf("Capital letters are:%d\n",iCnt);
    printf("Small letters are:%d\n",sCount);
}




























///////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountSpace
// Input :         String
// Output:         Integer
// Description :   It is use to return count of white space.
// Author :        Priyanka Sapakal
// Date:           29/09/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include"Header.h"

UINT CountCSpace(char *str)
{
    int iCnt=0;

    if(str==NULL)
    {
        return 0;
    }
    while(*str!='\0')
    {
        if(*str==' ')
        {
         iCnt++;
        }
        str++;
        
    }
    return iCnt;
}








//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Count
// Input :         String
// Output:         Integer
// Description :   It is use to return count of Vowels.
// Author :        Priyanka Sapakal
// Date:           11/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


UINT Count(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}








//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CaseCount
// Input :         String
// Output:         Integer
// Description :   It is use to return count of Vowels.
// Author :        Priyanka Sapakal
// Date:           11/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


UINT CaseCount(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}




//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CountChar
// Input :         String,Char
// Output:         Integer
// Description :   It is use to return count of Perticular character in the String.
// Author :        Priyanka Sapakal
// Date:           11/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


UINT CountChar(char *str,char cValue)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
    while(*str!='\0')
    {
        if(*str==cValue)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}



















//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : ChkPalindrome
// Input :         String
// Output:         Boolean
// Description :   It is use to Check the string is Palindrome or not.
// Author :        Priyanka Sapakal
// Date:           11/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


BOOL ChkPalindrome(char *str)
{
   char *end=NULL;
   end=str;
   while(*end!='\0')
   {
       end++;
   } 
   end--;
   
 while(str<end)
 {
   if(*str!=*end)
   {
      
      break;
   }
  
   str++;
   end--;
 }
 
 if(str<end)
 {
    return FALSE;
 }
 else
 {
     return TRUE;
 }

}













//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Swap
// Input :         character,character
// Output:        
// Description :   It is use to swap the characters.
// Author :        Priyanka Sapakal
// Date:           11/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


void Swap(char *ch1,char *ch2)
{
   char iTemp='\0';

   iTemp=*ch1;
   *ch1=*ch2;
   *ch2=iTemp;
}












//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Xstrrev
// Input :         String
// Output:         
// Description :   It is use to Reverse the string.
// Author :        Priyanka Sapakal
// Date:           11/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


void Xstrrev(char *str)
{
   char *end='\0';
   char iTemp;
   end=str;

   while(*end!='\0')
   {
       end++;
   }
   end--;
   while(str<end)
   {
       iTemp=*str;
       *str=*end;
       *end=iTemp;

       str++;
       end--;
   }
}














//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : chkAlpha
// Input :         String
// Output:         Boolean
// Description :   It is use to check character is alphabet or not.
// Author :        Priyanka Sapakal
// Date:           11/10/2021
//
////////////////////////////////////////////////////////////////////////////////////////////////


BOOL chkAlpha(char str)
{
   if((str>='A' &&str<='Z')||(str>='a' &&str<='z'))
   {
       return TRUE;
   }
   else
   {
       return FALSE;
   }
}















