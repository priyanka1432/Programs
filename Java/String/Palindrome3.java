////////////////////////////////////////////////////////////////////////////
//
// Accept the String from user and Check if it is Palindrome or not.
//
////////////////////////////////////////////////////////////////////////////


import UserPackage.StringX;
import UserPackage.StringRX;


class Check extends StringX
{
    public boolean CheckPalindrome()
    {
        String str1;
        int iCnt =0;
        boolean flag=false;
        
        str1=StringRX.ReverseX(str);

        char Arr1[]=str1.toCharArray();
        char Arr[]=str.toCharArray();

        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            if(Arr1[iCnt]==Arr[iCnt])
            {
                flag=true;

            }
            else
            {
                flag=false;
            }
        }
        
        return flag;
    }

}
class Palindrome3
{
    public static void main(String arg[])
    {
        String str;
        boolean bRet;

        Check cobj=new Check();
        cobj.Accept();
        bRet=cobj.CheckPalindrome();
        if(bRet==true)
        {
            System.out.println("It is Palindrome");
        }
        else
        {
            System.out.println("It is not Palindrome");
        }
           

    }
}