//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Check Number is Prime or not.
//
//////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class PrimeNumber2
{
    public static void main(String arg[])
    {
        int iNum=0;
        boolean bRet=false;
        System.out.println("Enter the Number");
        Scanner sobj=new Scanner(System.in);
        iNum=sobj.nextInt();
        
        Prime cobj=new Prime(iNum);
        bRet=cobj.CheckPrime();
        if(bRet==true)
        {
            System.out.println("It is Prime Number");
        }
        else
        {
            System.out.println("It is not Prime Number");

        }
        
    }
}








class Prime 
{
    public int iNum;

    public Prime(int iNum)
    {
        this.iNum=iNum;
    }
    public boolean CheckPrime()
    {
        boolean bret=true;
        int iCnt=0;

        for(iCnt=2;iCnt<=iNum/2;iCnt++)
        {
             if(iNum%iCnt==0)
             {
                return false;
                
             }
             
        
        }           
       return true;
    }

}
