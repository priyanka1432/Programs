/////////////////////////////////////////////////////////////////////////////
//
// Accept  number From user  Display in the  order Max min.
//
////////////////////////////////////////////////////////////////////////////

/*INPUT:5
        10 20 30 40 50

OUTPUT: 50 10 40 20 30
*/





import java.util.*;
import UserPackage.ArraySortX;


class SortMax extends ArraySortX
{
    public SortMax(int iSize)
    {
      super(iSize);
    }
    public void display()
    {
        int iCnt=0,iTemp=0,length=0,j=0;
        length=(Arr.length+1)/2+1;


        for(iCnt=1;iCnt<=length;iCnt++)
        {
          if(iCnt%2!=0)
          {
            iTemp=Arr[Arr.length-1];
            for(j=Arr.length-2;j>=iCnt;j--)
            {
                 Arr[j+1]=Arr[j];
            }
            Arr[iCnt]=iTemp;
          }
              
        } 

        for(int i=0;i<Arr.length;i++)
        {
          System.out.print("\t"+Arr[i]);
        }
     }        

}

class SortMaxMin
{
    public static void main(String arg[])
    {
        int iSize=0;
       Scanner sobj=new Scanner(System.in);

       System.out.println("Enter the number of elements");
       iSize=sobj.nextInt();

       SortMax  aobj=new SortMax (iSize);
       aobj.accept();
       aobj.Sort();
       System.out.print("elements are: ");
       aobj.display();
    }
}

