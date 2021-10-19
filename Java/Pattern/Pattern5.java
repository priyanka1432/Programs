/////////////////////////////////////////////////////////////////////////////
//
// accept number of rows and number of columns  from user and display below pattern. 
//
////////////////////////////////////////////////////////////////////////////


/*Input : iRow = 3 iCol = 4 
Output : 1 2 3 4 
         5 6 7 8 
         9 10 11 12 
 

*/




import java.util.*;



class Pattern
{
    public void Patterns(int iRows,int iCol)
    {
        int i=0,j=0,iCnt=0;
        iCnt=1;
        
        for(i=iRows;i>=1;i--)
        {
            
            for(j=1;j<=iCol;j++)
            {
               System.out.print(iCnt+"\t");
               iCnt++;
               
            }
             System.out.println();
        }
    }
  
}
class Pattern5
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