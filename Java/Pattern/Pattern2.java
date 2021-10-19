/////////////////////////////////////////////////////////////////////////////
//
// accept number of rows and number of columns  from user and display below pattern. 
//
////////////////////////////////////////////////////////////////////////////


/*Input : iRow = 4 iCol = 4 
Output : A B C D 
         a b c d 
         A B C D 
         a b c d

*/




import java.util.*;



class Pattern
{
    public void Patterns(int iRows,int iCol)
    {
        int i=0,j=0;
        char ch;
        for(i=1;i<=iRows;i++)
        {
            if(i%2!=0)
            {
                ch='A';
                for(j=1;j<=iCol;j++)
                {
                  System.out.print(ch+"\t");
                   ch++;
                }
            }
            else
            {
                 ch='a';
                for(j=1;j<=iCol;j++)
                {
                  System.out.print(ch+"\t");
                   ch++;
                }

            }
        
             System.out.println();
        }
        
    }
  
}
class Pattern2
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
