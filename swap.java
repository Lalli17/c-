import java.util.Scanner;
class swap
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter two numbers\n");
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println("numbers before swap="+ a + "\t" + b);
        a=a+b;
        b=a-b;
        a=a-b;
         System.out.println("numbers after swap="+ a + "\t" + b);
    }
}