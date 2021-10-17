////////////////////////////////////////////////////////////////////////
//
// Accept width & height of rectangle from user and calculate its area.
//
////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class AreaRect
{
    public static void main(String arg[])
    {
       double Width=0.0,Height=0.0,dRet=0.0;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter the width");
       Width=sc.nextDouble();
       System.out.println("Enter the Height");
       Height=sc.nextDouble();

       Rectangle r1=new Rectangle(Width,Height);
      dRet= r1.Area();
      System.out.println("Area of Rectangle is:"+dRet);


    }
}


class Rectangle
{
    public double Width;
    public double Height;

   public Rectangle(double Width,double Height)
   {
        this.Width=Width;
        this.Height=Height;
   }

   public double Area()
   {
       double Area=0;
       Area=Width*Height;

       return Area;
   }
}