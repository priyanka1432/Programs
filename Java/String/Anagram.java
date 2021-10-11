///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept the String and  check whether it is Anagram or not.
//                  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 INPUT:aba
       aab
         
OUTPUT:It is Anagram.
*/



import java.util.*;
class AnagramString
{
   String str1;
   String str2;
    public AnagramString(String str1,String str2)
    {
        this.str1=str1;
        this.str2=str2;

    }
    public boolean checkAna()
    {
      Map<Character,Integer> smap1=new HashMap<>();
      Map<Character,Integer> smap2=new HashMap<>();

      char[] ch1=str1.toCharArray();
      char[] ch2=str2.toCharArray();
      for(Character ch:ch1)
      {
          if(smap1.containsKey(ch))
          {
              smap1.put(ch,smap1.get(ch)+1);
          }
          else
          {
              smap1.put(ch,1);
          }
      }
      for(Character chr:ch2)
      {
          if(smap2.containsKey(chr))
          {
              smap2.put(chr,smap2.get(chr)+1);
          }
          else
          {
              smap2.put(chr,1);
          }
      }

      if(smap1.equals(smap2))
      {
          return true;
      }
      else
      {
          return false;
      }
    }
}
class Anagram
{
    public static void main(String arg[])
    {
        boolean bRet=false;
        Scanner sc=new Scanner(System.in);
        String str1=sc.nextLine();
        String str2=sc.nextLine();

        AnagramString A1=new AnagramString(str1,str2);
        bRet=A1.checkAna();
        if(bRet==true)
        {
            System.out.println("IT is anagram");
        }
        else
        {
            System.out.println("IT is not anagram");

        }
    }
}