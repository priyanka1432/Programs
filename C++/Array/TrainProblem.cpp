/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Givem schedule of the trains and their stoppage time at a Railaway station,find minimum number of platforms needed.
// If Train A's departure time is x and Train B's departure time is x,then we can't accommodate Train B on The same platform as Train A.
//                  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 INPUT:3
       10 2
       5 10
       13 5
         
OUTPUT:2
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MinPlatform(int iNoTrains,int *Arrival,int *Depar);


int main()
{
    int iNoTrains=0,a=0,b=0,iRet=0;
    cin>>iNoTrains;
    int *Arrival=new int[iNoTrains];
    int *Depar=new int[iNoTrains];
    for(register int i=0;i<iNoTrains;i++)
    {
        cin>>a;
        cin>>b;
        Arrival[i]=a;
        Depar[i]=a+b;
    }
    sort(Arrival,Arrival+iNoTrains);
    sort(Depar,Depar+iNoTrains);
    iRet=MinPlatform(iNoTrains,Arrival,Depar);
    cout<<iRet<<endl;
    return 0;

}
int MinPlatform(int iNoTrains,int *Arrival,int *Depar)
{
  int Max_plat=1;
  int Required_plat=1;
  int i=1,j=0;


 while(i<iNoTrains&&j<iNoTrains)
 {

   if(Arrival[i]<=Depar[j])
   {
       Max_plat++;
       Required_plat++;
       i++;
   }
   else if(Arrival[i]>Depar[j])
   {
       
       Required_plat--;

       j++;
   }

 }


 if( Max_plat<=Required_plat)
 {
     return Max_plat;
 }
 else{
     return Required_plat;
 }



}