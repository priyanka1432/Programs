/////////////////////////////////////////////////////////////////////////////
//
// Accept  numbers From user  Display the  Average of it.
//
////////////////////////////////////////////////////////////////////////////






import java.util.*;
import UserPackage.ArrayX;
class Logic extends ArrayX
{
    public Logic(int iSize)
    {
        super(iSize);
    }
    public float Average()
    {
        int iSum=0;
        float favg=0.0f;
        
       for(int iCnt=0;iCnt<Arr.length;iCnt++)
       {
          iSum=iSum+Arr[iCnt];
       
        }
        favg=iSum/Arr.length;
       return favg ;
    }

}




class Average
{
  public static void main(String arg[])
  {

    int iSize=0;
    float fRet=0.0f;
    
    System.out.println("Enter the size of the array");
    Scanner sc=new Scanner(System.in);
    iSize=sc.nextInt();
    Logic lobj=new Logic(iSize);
    lobj.accept();
    

     fRet=lobj.Average();
    
   
     System.out.println("Average is:"+fRet);
   
  }
}