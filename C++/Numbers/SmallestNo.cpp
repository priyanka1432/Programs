#include<iostream>
using namespace std;

class Small
{
    public:
    int iNumber;
    Small(int iNumber)
    {
       this->iNumber=iNumber;
    }
    void Smallest()
    {
        int Arr[50]={0},j=0,iNo=0;
        if(iNumber<10)
        {
            cout<<10+iNumber;
            return;
        }
        for(register int i=9;i>=2;i--)
        {
            while(iNumber%i==0)
            {
            iNumber=iNumber/i;
            Arr[j]=i;
            
            j++;
            }

        }
        if(iNumber>10)
        {
            cout<<"Impossible"<<endl;
        }
       for(register int iCnt=j-1;iCnt>=0;iCnt--)
       {
           cout<<Arr[iCnt];
       }
    }

};





int main()
{
    int iNumber=0;
    Small *ptr=NULL;
   

    cin>>iNumber;
    ptr=new Small(iNumber);
    ptr->Smallest();
   
    delete ptr;
    return 0;
    
}
