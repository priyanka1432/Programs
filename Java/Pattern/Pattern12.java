////////////////////////////////////////////////////////////////////////////////////
//
// accept number of rows and number of columns  from user and display below pattern. 
//
///////////////////////////////////////////////////////////////////////////////////


/*Input : iRow = 4 iCol = 3 
Output : 1 2 3 
         1 2 3 
         1 2 3 
         1 2 3 

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
               System.out.print(j+"\t");
               
            }
             System.out.println();
        }
    }
  
}
class Pattern12
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