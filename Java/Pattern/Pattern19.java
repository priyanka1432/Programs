/////////////////////////////////////////////////////////////////////////////
//
// accept String from user and display  below pattern.  
//
////////////////////////////////////////////////////////////////////////////


/*Input : Hello 
Output : H e l l o 
         H e l l * 
         H e l * * 
         H e * * * 
         H * * * * 
         H e * * * 
         H e l * * 
         H e l l * 
         H e l l 0 




*/




import java.util.*;

class StringX
{
    String str;
    public void Accept()
    {
        Scanner sobj =new Scanner(System.in);
        str=sobj.nextLine();
           
    }    

}

class Pattern extends  StringX
{
    public void Patterns()
    {
        int iCnt=0,j=0,k=0;
        char Arr[]=str.toCharArray();

        for(iCnt=Arr.length-1;iCnt>0;iCnt--)
        {

            for(j=0;j<Arr.length;j++)
            {
                if(j<=iCnt)
                {
                  System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }


            System.out.println();           
        }
         for(iCnt=0;iCnt<Arr.length;iCnt++)
        {

            for(k=0;k<Arr.length;k++)
            {
                if(k<=iCnt)
                {
                    System.out.print(Arr[k]+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();           
        }

        
    }
  
}
class Pattern19
{
    public static void main(String arg[])
    {
        Scanner sc=new Scanner(System.in);
        Pattern pobj=new Pattern();
        pobj.Accept();
        pobj.Patterns();       

    }
}