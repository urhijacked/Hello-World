#include<iostream>
class A
{
  int x,y,z,sum;
  A(int a,int b)
  {
    x=a;
    y=b;
    z=8;
	j=7;
    cout<<"The Value of x:"<<x<<"and y:"<<y;
  }
  void add()
  {
    cout<<"The sum of the two number is:"<<x+y+z;
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
