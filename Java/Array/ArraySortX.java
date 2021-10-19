package UserPackage;

import java.util.*;


public class ArraySortX
{
    public int Arr[];
    public ArraySortX(int iSize)
    {
       Arr=new int[iSize];
    }
    public void accept()
    {
        Scanner sc=new Scanner(System.in);
        int iCnt=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
           Arr[iCnt]=sc.nextInt();
        }        
    }
    public void Sort()
    {
        int iTemp=0;
        for(int i=0;i<Arr.length-1;i++)
        {
            for(int j=0;j<Arr.length-1-i;j++)
            {
                if(Arr[j]<Arr[j+1])
                {
                   iTemp=Arr[j];
                   Arr[j]=Arr[j+1];
                   Arr[j+1]=iTemp;
                }
            }
        }
    }
    public void display()
    {
        int iCnt=0;
       for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
           System.out.println(Arr[iCnt]+"\t");
        }  
    }
}

