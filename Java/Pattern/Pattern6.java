/////////////////////////////////////////////////////////////////////////////
//
// accept String from user and display  below pattern.  
//
////////////////////////////////////////////////////////////////////////////


/*Input : Hello 
Output : H e l l o 
         H e l l o 
         H e l l o 
         H e l l o 


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
        int iCnt=0,j=0;
        char Arr[]=str.toCharArray();

        for(iCnt=0;iCnt<Arr.length-1;iCnt++)
        {
            for(j=0;j<Arr.length;j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }
        
    }
  
}
class Pattern6
{
    public static void main(String arg[])
    {
        Scanner sc=new Scanner(System.in);
        Pattern pobj=new Pattern();
        pobj.Accept();
        pobj.Patterns();       

    }
}