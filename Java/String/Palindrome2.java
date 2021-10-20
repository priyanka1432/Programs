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
        
        str1=StringRX.ReverseX(str);

        
        boolean bRet=str.equals(str1);
        return bRet;
    }

}
class Palindrome2
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