////////////////////////////////////////////////////////////////////////////
//
// Accept the String from user and Check if it is Palindrome or not.
//
////////////////////////////////////////////////////////////////////////////


import UserPackage.StringX;


class Reverse extends StringX
{
    public boolean CheckPalindrome()
    {
        char Arr[]=str.toCharArray();
        
        int iStart=0,iEnd=Arr.length-1;

        char temp;
        while(iStart<iEnd)
        {
            temp=Arr[iStart];
            Arr[iStart]=Arr[iEnd];
            Arr[iEnd]=temp;
            iStart++;
            iEnd--;
        }

        String newstr=new String(Arr);
        boolean bRet=newstr.equals(str);
        return bRet;
    }

}


class Palindrome
{
    public static void main(String arg[])
    {
        String str;
        boolean bRet;

        Reverse robj=new Reverse();
        robj.Accept();
        bRet=robj.CheckPalindrome();
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
