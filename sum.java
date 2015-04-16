import java.lang.io;
import java.util.*;
class A
{
  int sum, x, y;
  A(int a. int b)
  {
    x=a;
    y=b;
    System.out.println("The Value of x:"+x+"and y:"+y);
  }
  void add()
  {
    System.out.println("The sum of the two number is:"+(x+y));
  }
}
Class B
{
  Public static void main(string args[])
  {
    int m,n;
    Scanner in=new Scanner(System.in);
    System.out.println("Enter two number: ");
    m=in.nextInt();
    n=in.nextInt();
    A ob=new A(m,n);
    ob.add();
  }
}
