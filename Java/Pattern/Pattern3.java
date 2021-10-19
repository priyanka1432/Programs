/////////////////////////////////////////////////////////////////////////////
//
// accept number of rows and number of columns  from user and display below pattern. 
//
////////////////////////////////////////////////////////////////////////////


/*Input : iRow = 3 iCol = 5 
Output : A A A A A 
         B B B B B 
         C C C C C

*/




import java.util.*;



class Pattern
{
    public void Patterns(int iRows,int iCol)
    {
        int i=0,j=0;
        char ch='A';
        for(i=1;i<=iRows;i++)
        {
            
            for(j=1;j<=iCol;j++)
            {
               System.out.print(ch+"\t");
               
            }
            ch++;
            System.out.println();
        }
    }
  
}
class Pattern3
{
    public static void main(String arg[])
    {
        int iRows=0,iCol=0;
        Scanner sc=new Scanner(System.in);
        iRows=sc.nextInt();
        iCol=sc.nextInt();
        Pattern pobj=new Pattern();
        pobj.Patterns(iRows,iCol);

    }
}