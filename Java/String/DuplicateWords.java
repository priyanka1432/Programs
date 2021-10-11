///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept the String from user and print duplicate words in string
//                  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
 INPUT:iam am programmer in java java
         
OUTPUT:am=2
       java=2
*/

import java.util.*;

class Duplicate
{
    String[] arr;
    public Duplicate(String[] Arr)
    {
        this.arr=Arr;

    }
    public void words()
    {
        Map<String,Integer> smap=new HashMap<>();
        for(String s:arr)
        {
            if(smap.containsKey(s))
            {
                smap.put(s,smap.get(s)+1);
            }
            else
            {
                smap.put(s,1);
            }
            
        }

       for(Map.Entry<String,Integer> entry:smap.entrySet())
       {
           if(entry.getValue()>1)
           {
               System.out.println(entry);
           }

       }



    }
}
class DuplicateWords
{
    public static void main(String arg[])
    {
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        String arr[]=str.split(" ");

        Duplicate d1=new Duplicate(arr);
        d1.words();
        
    }
}