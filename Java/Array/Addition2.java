/////////////////////////////////////////////////////////////////////////////
//
// Accept  number From user  Display the  Addition of the Array.
//
////////////////////////////////////////////////////////////////////////////



import java.util.*;


class Addition2
{
  public static void main(String arg[])
  {

    int iSize=0,iRet=0;
    
    System.out.println("Enter the size of the array");
    Scanner sc=new Scanner(System.in);
    iSize=sc.nextInt();
        
    Array1 a1=new Array1(iSize);
    a1.Accept();
    iRet=a1.AddArray();

   
     System.out.println("Addition of the Array is:"+iRet);
   
  }
}


class Array1
 { 
    
    public int iSize;
    public int Arr[];

    Array1(int iSize)
    {
      this.iSize=iSize;
      Arr=new int[iSize];
    }
  

   public void Accept()
   {
     
     Scanner sc=new Scanner(System.in);
     for(int iCnt=0;iCnt<iSize;iCnt++)
     {
       Arr[iCnt]=sc.nextInt();
     }
       
       
    }
    public int AddArray()
    {
       int iSum=0;
       for(int iCnt=0;iCnt<iSize;iCnt++)
       {
          iSum=iSum+Arr[iCnt];
       
        }
       return iSum;
     }
  
  
}

