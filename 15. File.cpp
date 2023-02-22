#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class student_info{
    public:
    char name[20];
    int age;
    char sex;
    float height;
    float weight;
    void read(ofstream &);
    void write(ifstream &);
};
void student_info::read(ofstream &fout){
    cout<<"\nEnter Name:";cin>>name;
    cout<<"Enter Age:";cin>>age;
    cout<<"Enter Sex (F/M):";cin>>sex;
    cout<<"Enter Height:";cin>>height;
    cout<<"Enter Weight:";cin>>weight;
    fout<<"\nName : "<<name<<endl;
    fout<<"Age  :"<<age<<endl;
    fout<<"Sex  :"<<sex<<endl;
    fout<<"Height :"<<height<<endl;
    fout<<"Weight :"<<weight<<endl;
}
void student_info::write(ifstream &fin){
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
}
int main(){
    cout<<"Enter the No. of Records:";
    int n;
    cin>>n;
    student_info student;
    ofstream fout;
    fout.open("data1.txt");
    for(int i=0;i<n;i++)
    student.read(fout);
    fout.close();
    cout<<"----Displaying Contents of the file---- \n";
    ifstream fin;
    fin.open("data1.txt");
    student.write(fin);
    fin.close();
    return 0;
}
