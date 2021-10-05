/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  A Strange number is an integer number N which has factors that are prime numbers.The square root of the number N should be less than the  greatest prime factor of 'N'.The task is here is to find out if the given number 'N' is "strange" or "Not strange".
//                  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
INPUT:15        
OUTPUT:Strange

INPUT:25        
OUTPUT:Not Strange
*/

#include<bits/stdc++.h>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL factors(int iNumber);
BOOL checkPrime(int iNo);

BOOL factors(int iNumber)
{
    int j=0,iNo=0,iMax=0,sq=0;
    iNo=iNumber;
    BOOL iRet=FALSE;
    for(register int i=2;i<=iNumber;i++)
    {
        while(iNumber>1)
        {
            if(iNumber%i==0)
            {
                iRet=checkPrime(i);              
                if(iRet==FALSE && i>iMax)
                {
                   
                   iMax=i;
                   
                }
                iNumber=iNumber/i;
            }
            else
            {
                break;
            }
        }
    }


    sq=sqrt(iNo);
    

    if(sq<iMax)
    {
        return TRUE;
    }
    else{
        return FALSE;
    }
}


BOOL checkPrime(int iNo)
{
    BOOL flag=FALSE;
    for(register int i=2;i<=iNo/2;i++)
    {
        
        if(iNo%i==0)
        {
          flag=TRUE;
           break;
        }
        else{
            flag=false;
        }
    }
    return flag;
}


int main()
{
    int iNumber=0;
    BOOL res=FALSE;
    cin>>iNumber;

    res=factors(iNumber);
    if(res==TRUE)
    {
        cout<<"It is Stranger"<<endl;
    }
    else
    {
        cout<<"It is not Stranger"<<endl;
    }
}