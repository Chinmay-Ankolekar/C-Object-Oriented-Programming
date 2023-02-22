#include<iostream>
using namespace std;

class student{
    public:
    int reg,age;
    char name[50];
    void getdata();
};
class ug:public student{
    public:
    int sem;
    float fees,stipend;
    void getdata();
};
class pg:public student{
    public:
    int sem;
    float fees,stipend;
    void getdata();
};
void student::getdata(){
    cout<<"\nEnter Name :";
    cin>>name;
    cout<<"Enter Regsiter No. and Age respectively:";
    cin>>reg>>age;
}
void ug::getdata(){
    student::getdata();
    cout<<"Enter Sem:";
    cin>>sem;
    cout<<"Enter fees and stipend repectively:";
    cin>>fees>>stipend;
}
void pg::getdata(){
    student::getdata();
    cout<<"Enter Sem:";
    cin>>sem;
    cout<<"Enter fees and stipend repectively:";
    cin>>fees>>stipend;
}
int main(){
    ug u[20];
    pg p[20];
    int j,i,n;
    float avg;
    cout<<"Enter the entries of UG student:";
    cin>>n;
    cout<<"Enter the details\n";
    for(i=0;i<n;i++)
        u[i].getdata();
      for(i=1;i<=8;i++){
        int count=0,found=0;
        float sum=0;
       for(j=0;j<n;j++){
          if(u[j].sem==i){
               found=1;
               count++;
               sum+=u[j].age;
        } 
    }
    if(found==1){
         avg=sum/count;
         cout<<"The average age of Sem "<<i<<" is "<<avg<<endl;
    }
    }
cout<<"Enter the entries of PG student:";
cin>>n;
cout<<"Enter the details\n";
for(i=0;i<n;i++)
p[i].getdata();
for(i=1;i<=4;i++){
    int count=0,found=0;
    float sum=0;
    for(j=0;j<n;j++){
        if(p[j].sem==i){
             found=1;
            count++;
             sum+=p[j].age;
        }
    }
    if(found==1){
         avg=sum/count;
         cout<<"The average age of Sem "<<i<<" is "<<avg<<endl;
    }
}
return 0;
}
