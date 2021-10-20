////////////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows and number of columns  from user and display below pattern. 
//
///////////////////////////////////////////////////////////////////////////////////


/*Input : iRow = 6 iCol = 6 
Output : * * * * * * 
         * * * 
         * * * 
         * * * 
         * * * 
         * * * * * * 


*/




import java.util.*;



class Pattern
{
    public void Patterns(int iRows,int iCol)
    {
        int i=0,j=0;
        if(iRows!=iCol)
        {
            return;
        }
        for(i=1;i<=iRows;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                if(i==1||i==iRows)
                {
                    System.out.print("*\t");

                }
                else if(j<=3)
                {
                    System.out.print("*\t");
                }
               
               
            }
             System.out.println();
        }
    }
  
}
class Pattern23
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