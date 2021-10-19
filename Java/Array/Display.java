/////////////////////////////////////////////////////////////////////////////
//
// Accept  number From user  Display the  nummbers.
//
////////////////////////////////////////////////////////////////////////////






import java.util.*;


class Array
{
    public int iSize;
    public int Arr[];
    public Array(int iSize)
    {
        this.iSize=iSize;
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
class Display
{
    public static void main(String arg[])
    {
        int iSize=0;
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter the number of elements");
       iSize=sobj.nextInt();

       Array aobj=new Array(iSize);
       aobj.accept();

       System.out.print("elements are: ");
       aobj.display();
    }
}