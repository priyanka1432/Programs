///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Accept string from user split the string into exact 3 palindromic substrings.working from left right ,choose the smallest split for the string.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;
class Palindrome
{


    public boolean chkPalindrome(String str)
    {
        
        if(str.length()==1)
        {
           return true;
        }
        StringBuilder sb=new StringBuilder(str);
        sb=sb.reverse();
        String rev=new String(sb);
        return str.equals(rev);
    }
}

class SubStringPalindrome
{
    public static void main(String arg[])
    {
         String str=" ";
         String str1="",str2="",str3="";
        Scanner sc=new Scanner(System.in);
        str=sc.next();
        Palindrome p=new Palindrome();

        int len=str.length();

        boolean bflag=false;
        for(int i=1;i<len-1;i++)
        {
          
           str1=str.substring(0,i);
           if(p.chkPalindrome(str1));
           {
               for(int j=1;j<len-1;j++)
               {
                   str2=str.substring(i,i+j);
                   str3=str.substring(i+j,len);
                   if((p.chkPalindrome(str2))&&(p.chkPalindrome(str3)))
                   { 
                       System.out.println(str1+"\n"+str2+"\n"+str3);
                       bflag=true;
                       break;
                   }
               }
               if(bflag=true)
               {
                   break;
               }
           }
        }
        if(bflag==false)
        {
            System.out.println("Impossible");
        }

    }
}