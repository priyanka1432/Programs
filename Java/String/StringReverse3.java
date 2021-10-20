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
        StringBuilder sb=new StringBuilder(str);
        sb.reverse();

        return sb.toString();
    }

}
class StringReverse3
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