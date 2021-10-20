package UserPackage;

public class StringRX
{
    public static String ReverseX(String str)
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
