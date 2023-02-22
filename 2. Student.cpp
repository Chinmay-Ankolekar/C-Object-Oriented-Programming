/*2)Define a STUDENT class with USN, Name, and Marks in 3 tests of a 
subject.
Declare an array of 10 STUDENT objects. Using appropriate functions, 
find the average of two better marks for each student. Print the USN, 
Name and the average marks of all the students.*/

#include<iostream>
using namespace std;
#define SIZE 10

class STUDENT
{
  float m1,m2,m3;
  char name[20],num[10];
  public:
  void getdata();
  void dispdata();
};
void STUDENT::getdata()
{
  cout<<"\nEnter student USN: " ;
  cin>>name;
  cout<<"Enter student name: " ;
  cin>>num;
  cout<<"Enter student's 3 marks: " ;
  cin>>m1>>m2>>m3;
}
void STUDENT::dispdata()
{
  float avg,low=m1;
  if(m2<low){
    low=m2;}
  else if(m3<low){
    low=m3;}
  avg=(m1+m2+m3-low)/2;
  cout<<"\nStudent USN: "<<name
  <<"\nStudent name: "<<num
  <<"\nStudent average: "<<avg;
}
int main()
{
  STUDENT stud[SIZE];
  int n,i;
  
   cout<<"\nStudents Report";
   cout<<"\nEnter the number of students: ";
   cin>>n;
  for(int i=0;i<n;i++){
     stud[i].getdata();
  }
   cout<<"\n-----------------"
     <<"\nStudents Details::"
     <<"\n-----------------";
  for( i=0;i<n;i++)
  {
    cout<<"\nStudent:"<<i+1;
    stud[i].dispdata();
    cout<<"\n------------";
  }
}

/*
  OUTPUT:-

Students Report
Enter the number of students: 2

Enter student USN: 1
Enter student name: Chinmay
Enter student's 3 marks: 60 70 80

Enter student USN: 2
Enter student name: ABC
Enter student's 3 marks: 80 90 50

-----------------
Students Details::
-----------------
Student:1
Student USN: 1
Student name: Chinmay
Student average: 75
------------
Student:2
Student USN: 2
Student name: ABC
Student average: 85
------------
*/