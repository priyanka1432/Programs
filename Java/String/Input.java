/////////////////////////////////////////////////////////////////////////////
//
// Accept the String from user and display it. 
//
////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Input
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        String str;

        System.out.println("Enter your name");
        str=sobj.nextLine();

        System.out.println("Hello:"+str);
    }
}