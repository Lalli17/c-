import java.util.Scanner;
public class greatest
{
    public static void main(String [] args)
    {
    double a,b,c,big;
    Scanner sc=new Scanner(System.in);
    System.out.println("enter three numbers");
    a=sc.nextDouble();
    b=sc.nextDouble();
    c=sc.nextDouble();
    if(a>b && a>c)
    {
        big=a;
    }
    else if(b>a && b>c)
    {
        big=b;
    }
    else
    {
        big=c;
    }
    System.out.println("greatest number="+big);
    }
}