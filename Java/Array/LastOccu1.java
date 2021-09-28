/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and accept one another number as NO ,return index of last occurrence of that NO.
//                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class LastOccu1
{
    public static void main(String arg[])
    {
        Scanner sc=new Scanner(System.in);
        int iSize=0,iNo=0,iRet=0;

        System.out.println("Enter the size of the array");
        iSize=sc.nextInt();
        System.out.println("Enter the number");
        iNo=sc.nextInt();

        Occurance oc1=new Occurance(iSize);
        System.out.println("Enter the Elements");
        oc1.Accept();
       
        iRet=oc1.Index(iNo);
        if(iRet==-1)
        {
            System.out.println("No such Number");
        }
        else
        {
            System.out.println("The number is at index:"+iRet);
        }
        
    }
}


class Occurance
{
    public int Arr[];
    public Occurance(int iSize)
    {
        Arr=new int[iSize];
    }
    public void Accept()
    {
        Scanner sc1=new Scanner(System.in);
        for(int i=0;i<Arr.length;i++)
        {
            Arr[i]=sc1.nextInt();
        }
    }
    public int Index(int iNo)
    {
        int i=0,iIndex=-1;
        for(i=Arr.length-1;i>=0;i--)
        {
            if(Arr[i]==iNo)
            {
                iIndex=i;
            }
        }
        return iIndex;
    }

}