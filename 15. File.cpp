/*Write a program to read the class object of student_info such as 
name,age,sex,height and weight from the keyboard and to store them on a 
specified file using read() and write() functions. Again the same file is 
opened for reading and displaying the contents of the file on the screen.
*/

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
/*
OUTPUT:-
Enter the No. of Records:2

Enter Name:ABC
Enter Age:12
Enter Sex (F/M):M
Enter Height:5
Enter Weight:56

Enter Name:XYZ
Enter Age:12
Enter Sex (F/M):F
Enter Height:4.5
Enter Weight:45

----Displaying Contents of the file---- 
Name : ABC
Age  :12
Sex  :M
Height :5
Weight :56

Name : XYZ
Age  :12
Sex  :F
Height :4.5
Weight :45
*/