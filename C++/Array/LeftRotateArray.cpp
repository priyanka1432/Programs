/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Given an array arr[] of N integer and a positive integer k.Cyclically rotate the array clockwise by k.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 INPUT:5 2
         10,20,30,40,50
OUTPUT:40,50,10,20,30
*/








#include<iostream>
using namespace std;



class Rotate
{
  public:
  int *ptr;
  int iSize;
  int k;
 
   Rotate(int iSize,int k)
   {
     this->iSize=iSize;
     this->k=k;
     ptr=new int[iSize];
   }
  ~Rotate()
  {
    delete []ptr;
  }

  void Accept()
  {
    for(register int i=0;i<iSize;i++)
    {
      cin>>ptr[i];
    }
       
  }
 
  int* leftRotate()
  {
     int temp=0;
     for(int i=1;i<=iSize-k;i++)
     {
       temp=ptr[0];
       for(int j=0;j<iSize-1;j++)
       {
          ptr[j]=ptr[j+1];
       }
       ptr[iSize-1]=temp;
     }
    return ptr;          
  }  
};

 

  
int main()
{
  int iSize=0,k=0;
  cin>>iSize;
  cin>>k;

  Rotate *rt;
   rt=new Rotate(iSize,k);
   
  rt->Accept();
  int *Arr=rt->leftRotate();
  for(int i=0;i<iSize;i++)
  {
   cout<<Arr[i]<<"\t";
  }
  delete rt;

return 0;
}