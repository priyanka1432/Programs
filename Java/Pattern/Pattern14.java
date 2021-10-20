////////////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows and number of columns  from user and display below pattern. 
//
///////////////////////////////////////////////////////////////////////////////////


/*Input : iRow = 3 iCol = 4 
Output : * # * # 
         * # * # 
         * # * # 


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
                if(j%2!=0)
                {
                  System.out.print("*\t");
                }
                else
                {
                    System.out.print("#\t");

                }
               
            }
             System.out.println();
        }
    }
  
}
class Pattern14
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