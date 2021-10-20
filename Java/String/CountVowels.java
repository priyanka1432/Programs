/////////////////////////////////////////////////////////////////////////////
//
// Accept the String from user and count number of vowels. 
//
////////////////////////////////////////////////////////////////////////////


import UserPackage.StringX;
class Count extends StringX
{
    public int CountVowels()
    {
        int iCnt=0,i=0;
       char Arr[]=str.toCharArray();
       for(i=0;i<Arr.length;i++)
       {
         if((Arr[i]=='A')||(Arr[i]=='E')||(Arr[i]=='I')||(Arr[i]=='O')||(Arr[i]=='U')||(Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u'))
         {
            iCnt++;
         }
           
       }
       return iCnt;
    }

}
class CountVowels
{
    public static void main(String arg[])
    {
        int iRet=0;
       Count cobj=new Count();
       cobj.Accept();
       iRet=cobj.CountVowels();
       System.out.println("The number of vowels are:"+iRet);

    }
}