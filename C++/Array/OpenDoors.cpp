










#include<iostream>
using namespace std;




class Solution {
  public:
    int noOfOpenDoors(long long N) {
        // code here
        int iOpen=0;
      long long *Arr=NULL;
       Arr=new long long[N];
       for(int i=0;i<N;i++)
       {
           Arr[i]=0;
       }
       
         
        for(register int i=0;i<N;i++)
        {
            for(register int j=0;j<N;j++)
            {
                if(i+j<N)
                {
                    
                    if(Arr[i+j]==0)
                    {
                        Arr[i+j]=1;
                        iOpen++;
                        
                    }
                    else if(Arr[i+j]==1)
                    {
                        Arr[i+j]=0;
                        iOpen--;
                        
                    }
                }
                else
                {
                    break;
                }
            }
            
        }
        
        return iOpen;
    }
};


int main() {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.noOfOpenDoors(N) << endl;
    
    return 0;
}