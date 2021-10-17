//////////////////////////////////////////////////////////////////////
//
// Accept  numbers from user and Check Number is Armstrong or not.
//
//////////////////////////////////////////////////////////////////////



import java.util.Scanner;

class Armstrong
{
    public static void main(String arg[])
    {
        int iNum=0,iCount=0,iSum=0;
        boolean bRet=false;
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the number");
        iNum=sobj.nextInt();
           
        ArmStrongNumber aobj=new ArmStrongNumber(iNum);
        iCount=aobj.CountDigit();
        iSum=aobj.SumDigit(iCount);
        bRet=aobj.CheckArmstrong(iSum);
        if(bRet==true)
        {
            System.out.println("It is Armstrong Number");
        }
        else
        {
             System.out.println("It is not Armstrong Number");
       }
    }
}


class ArmStrongNumber
{
    public int iNum;

    public ArmStrongNumber(int iNum)
    {
        this.iNum=iNum;
    }
    public int  CountDigit()
    {
        int iNo=0,iCnt=0,iDigit=0;
        if(iNum<0)
        {
            iNum=-iNum;
        }
  
        iNo=iNum;
        while(iNo!=0)
        {
           iCnt++;
           iNo=iNo/10;
        }
        return iCnt;

    }
    public int SumDigit(int iCount)
    {
        int iNo=0,iDigit=0,iSum=0;
        iNo=iNum;
        
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iSum=iSum+(int)Math.pow(iDigit,iCount);
            iNo=iNo/10;
        }
        return iSum;

    }
    public boolean CheckArmstrong(int iNumber)
    {
        if(iNum==iNumber)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}