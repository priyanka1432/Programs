/////////////////////////////////////////////////////////////////////////////
//
// Accept  number From user  Display the  Addition of the Array.
//
////////////////////////////////////////////////////////////////////////////




import UserPackage.ArrayX;
import java.util.*;


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


class Addition4
{
  public static void main(String arg[])
  {

    int iSize=0,iRet=0;
    
    System.out.println("Enter the size of the array");
    Scanner sc=new Scanner(System.in);
    iSize=sc.nextInt();
    Logic lobj=new Logic(iSize);
    lobj.accept();
    

    iRet=lobj.Add();
    
   
     System.out.println("Addition of the Array is:"+iRet);
   
  }
}