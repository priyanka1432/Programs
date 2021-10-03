///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Find the minimum numbers of coins required to form any value between 1 to N.Cumulative value of coins should not exceed N.
//  Coin denominations are 1 rs,2Rs and 5Rs.
//                  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 INPUT:13
         
OUTPUT:4
*/




#include<iostream>
using namespace std; 

typedef unsigned int UINT;
UINT MinCoin(int);



int main()
{
  int N=0;
  UINT iRet=0;
  cin>>N;
 
  iRet=MinCoin(N);
  cout<<iRet<<endl;

  return 0;
}
 
UINT MinCoin(int N)
{
  int iOne=0,iFive=0,iTwo=0;
  UINT iMin=0;

  iFive=(N-4)/5;
  if((N-5*iFive)%2==0)
   {
     iOne=2;     
   }
  else
  {
    iOne=1;    
  }
 iTwo=(N-5*iFive-iOne)/2;

 iMin=iOne+iFive+iTwo;
 return iMin;
}


