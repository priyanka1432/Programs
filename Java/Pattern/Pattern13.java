////////////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows and number of columns  from user and display below pattern. 
//
///////////////////////////////////////////////////////////////////////////////////


/*Input : iRow = 3 iCol = 5 
Output : 5 4 3 2 1 
         5 4 3 2 1 
         5 4 3 2 1 

*/




import java.util.*;



class Pattern
{
    public void Patterns(int iRows,int iCol)
    {
        int i=0,j=0;
        
        for(i=1;i<=iRows;i++)
        {
            for(j=iCol;j>0;j--)
            {
               System.out.print(j+"\t");
               
            }
             System.out.println();
        }
    }
  
}
class Pattern13
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