/////////////////////////////////////////////////////////////////////////////
//
// Accept  number From user  Display the  Addition of the Array.
//
////////////////////////////////////////////////////////////////////////////

import java.util.*;



public class ArrayX
{
    
    public int Arr[];
    public ArrayX(int iSize)
    {
    
       Arr=new int[iSize];
       
    }

    public void accept()
    {
      int iCnt=0;

      Scanner sobj=new Scanner(System.in);
      for(iCnt=0;iCnt<Arr.length;iCnt++)
      {
          Arr[iCnt]=sobj.nextInt();
      }

    }
    public void display()
    {
      int iCnt=0;
      for(iCnt=0;iCnt<Arr.length;iCnt++)
      {
          System.out.print(Arr[iCnt]+"\t");
      } 
    }
}



class Logic extends ArrayX
{
    public Logic(int iSize)
    {
        super(iSize);
    }
    public int Add()
    {
        int iSum=0;
        
       for(int iCnt=0;iCnt<Arr.length;iCnt++)
       {
          iSum=iSum+Arr[iCnt];
       
        }
       return iSum;
    }

}

class Addition3
{
  public static void main(String arg[])
  {

    int iSize=0,iRet=0;
    
    System.out.println("Enter the size of the array");
    Scanner sc=new Scanner(System.in);
    iSize=sc.nextInt();
    Logic lobj=new Logic(iSize);
    lobj.accept();
    lobj.display();

    iRet=lobj.Add();
    
   
     System.out.println("Addition of the Array is:"+iRet);
   
  }
}