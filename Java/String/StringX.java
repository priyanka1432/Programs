package UserPackage;


import java.util.*;

public class StringX
{
    public String str;

    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter String");

        str=sobj.nextLine();
    }

    public void Display()
    {
        System.out.println("String is :"+str);
    }
    public static boolean equalX(String str,String str1)
    {
        int iCnt=0;
        boolean flag=false;
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
