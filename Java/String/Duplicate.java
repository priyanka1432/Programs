///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept the String from user and print duplicate characters in string
//                  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 INPUT:Java
         
OUTPUT:a=2
*/


import java.util.*;

class Duplicate
{
   public static void main(String arg[])
   {
       String str=" ";
       Scanner sc=new Scanner(System.in);
       str=sc.nextLine();

       DupChar d=new DupChar();
       d.DuplicateChar(str);
   }
}

class DupChar
{
     public void DuplicateChar(String str)
     {
         char[] characters=str.toCharArray();

         Map<Character,Integer>chmap=new HashMap<Character,Integer>();
         for(Character ch:characters)
         {
             if(chmap.containsKey(ch))
             {
                 chmap.put(ch,chmap.get(ch)+1);
             }
             else
             {
                 chmap.put(ch,1);
             }
         }
         System.out.println("List of Duplicate characters are");
         for(Map.Entry<Character,Integer>entry:chmap.entrySet())
         {
             if(entry.getValue()>1)
             {
             System.out.printf("%s:%d\n",entry.getKey(),entry.getValue());
             }
         }
     }
}