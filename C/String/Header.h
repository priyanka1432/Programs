#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define TRUE 1
#define FALSE 0

typedef unsigned int UINT;
typedef int BOOL;
UINT strlenX(char *str);
void DisplayTable();
void DisplayTable1();
BOOL CheckCaps(char );
int CapsToSmall(char str);
int CharToggle(char str);
UINT SmallChar(char*);
UINT CountCaps(char *str);
void Display(char*);
UINT CountCSpace(char *str);
UINT Count(char *str); 
UINT CaseCount(char *str);
UINT CountChar(char *str,char cValue);