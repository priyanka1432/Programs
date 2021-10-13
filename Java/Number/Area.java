//////////////////////////////////////////////////////////////////////
//
// Accept  Radius From user and Find the Area of Circle.
//
//////////////////////////////////////////////////////////////////////


import java.util.Scanner;
class Area
{
    public static void main(String arg[])
    {
        double dRadius=0.0,dArea=0.0;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the Radius");
        dRadius=sc.nextDouble();

        Circle c=new Circle(dRadius);
        dArea=c.Area();
        System.out.println("Area of circle is:"+dArea);
    }

}

class Circle
{
   public double dRadius;
   public static double PI=3.14;

   public Circle(double dRadius)
   {
       this.dRadius=dRadius;
   }
   public double Area()
   {
       double Area=0.0;
       Area=PI*dRadius*dRadius;

       return Area;
   }
}