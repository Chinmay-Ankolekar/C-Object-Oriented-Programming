/*Write a C++ program to create a class called COMPLEX and implement 
the following overloading functions ADD that return a COMPLEX 
number.
1. ADD (a, s2) – where a in an integer (real part) and s2 is a complex 
number.
2. ADD (s1, s2) – where s1 and s2 are complex numbers*/

#include<iostream>
using namespace std;

class COMPLEX
{
  int r,i;
  public:
  void read();
  void print();
  friend COMPLEX ADD(int a,COMPLEX c);
  friend COMPLEX ADD(COMPLEX c1,COMPLEX c2);
};
void COMPLEX::read()
{
  cout<<"Enter real and imaginary\n";
  cin>>r>>i;
}
void COMPLEX::print()
{
  cout<<r<<"+i"<<i<<endl;
}
COMPLEX ADD(int a,COMPLEX c)
{
  COMPLEX t;
  t.r=a+c.r;
  t.i=c.i;
  return t;
}
COMPLEX ADD(COMPLEX c1,COMPLEX c2)
{
  COMPLEX t;
  t.r=c1.r+c2.r;
  t.i=c1.i+c2.i;
  return t;

}
int main()
{
   COMPLEX s1,s2,s3;
   s1.read();
   cout<<"\ns1 : ";
   s1.print();
   int a=2;
   s2=ADD(a,s1);
   cout<<"s2 : 2+s1\n";
   cout<<"   : ";
   s2.print();
   s3=ADD(s1,s2);
   cout<<"s3=s1+s2\n";
   cout<<"s1 : ";
   s1.print();
   cout<<"s2 : ";
   s2.print();
   cout<<"s3 : ";
   s3.print();
 }
 /*OUTPUT:-
Enter real and imaginary
2   3
s1 : 2+i3
s2 : 2+s1
   : 4+i3
s3=s1+s2
s1 : 2+i3
s2 : 4+i3
s3 : 6+i6*/