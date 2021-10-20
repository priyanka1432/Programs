////////////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows and number of columns  from user and display below pattern. 
//
///////////////////////////////////////////////////////////////////////////////////


/*Input : iRow = 3 iCol = 4 
Output : 1 1 1 1 
         2 2 2 2 
         3 3 3 3 
         4 4 4 4


*/




import java.util.*;



class Pattern
{
    public void Patterns(int iRows,int iCol)
    {
        int i=0,j=0;
        
        for(i=1;i<=iRows;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                System.out.print(i+"\t");
                
            }
             System.out.println();
        }
    }
  
}
class Pattern15
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