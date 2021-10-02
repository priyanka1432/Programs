/////////////////////////////////////////////////////////////////////////////
//
// Accept  number From user  Display the  Addition of the Array.
//
////////////////////////////////////////////////////////////////////////////



import java.util.*;


class Addition1
{
  public static void main(String arg[])
  {

    int iSize=5,iRet=0;
    
        
    Array1 d1=new Array1(5);
    d1.Accept();
    iRet=d1.AddArray();

   
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