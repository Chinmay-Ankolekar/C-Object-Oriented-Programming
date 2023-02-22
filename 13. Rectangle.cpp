#include<iostream>
using namespace std;
class rect{
    int l,b;
    public:
    rect(int,int);
    ~rect();
    void len();
    void breadth();
   void area(); // friend void area(rect);
};
rect::rect(int x,int y){
    l=x;
    b=y;
}
rect::~rect(){
    cout<<"Destructor called\n";
}
void rect::len(){
    cout<<"The Length is = "<<l<<endl;
}
void rect::breadth(){
    cout<<"The Breadth is ="<<b<<endl;
}
void rect::area(){
    cout<<"The area is = "<<l*b<<endl;
}
int main(){
    cout<<"Enter the Length and Breadth : ";
    int x,y;
    cin>>x>>y;
    rect r(x,y);
    r.len();
    r.breadth();
    r.area();
    return 0;
}
