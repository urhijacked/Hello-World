#include<iostream>
class A
{
  int x,y,sum;
  A(int a,int b)
  {
    x=a;
    y=b;
    cout<<"The Value of x:"<<x<<"and y:"<<y;
  }
  void add()
  {
    cout<<"The sum of the two number is:"<<x+y;
  }
}
int main()
{
  int m,n;
  cout<<"Enter two number:";
  cin>>m>>n;
  A ob(m,n);
  ob.add();
}
