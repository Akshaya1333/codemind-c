import java.util.Scanner;
class artmeticoperations
{
  public static void main(String args[])
{
    int a,b;
      Scanner sc=new Scanner(System.in);
      System.out.println("Enter any two numbers");
      
       a=sc.nextInt();
       b=sc.nextInt();

       
       int add=a+b;
       int mul=a*b;
       int sub=a-b;
       int div=a/b;
 
       
       System.out.println("Sum="+add);
       System.out.println("diff="+sub);
       System.out.println("product="+mul);
       System.out.println("divison="+div);

       sc.close();
}
}