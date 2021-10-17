//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Check Number is Prime or not.
//
//////////////////////////////////////////////////////////////////////


import java.util.Scanner;

class PrimeNumber
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

        for(int i=2;i<=iNum/2;i++)
        {
             if(iNum%i==0)
             {
                 bret=false;
                 break;
             }
             else
             {
                 bret=true;
             }
        }
        return bret;

    }

}