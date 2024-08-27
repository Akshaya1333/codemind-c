import java.util.Scanner;
class areaofcircle
{
   public static void main(String args[])
   {
       Scanner sc=new Scanner(System.in);
       float radius,area;
       radius=sc.nextFloat();
       area=3.142f*radius*radius;
       System.out.println("Area of circle is="+area);
       System.out.printf("Area of circle is=%.2f",area);
       

       
       
       sc.close();
}
}