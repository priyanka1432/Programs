////////////////////////////////////////////////////////////////////////////
//
// Accept the String from user and Reverse it.
//
////////////////////////////////////////////////////////////////////////////

import UserPackage.StringX;


class Reverse extends StringX
{
    public String ReverseX()
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
        return new String(Arr);
    }

}
class StringReverse
{
    public static void main(String arg[])
    {
        String str;
        Reverse robj=new Reverse();
        robj.Accept();
        str=robj.ReverseX();
        System.out.println(str);   

    }
}
