/*Write a C++ program to create a class called LIST (linked list) with 
member functions to insert an element at the front as well as to delete an 
element from the front of the list. Demonstrate all the functions after 
creating a list object.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

class list{
     int data;
     list *next;
     public:
          void insert();
          void del();
          void display();
}*newnode,*head=NULL,*temp;

void list::insert()
{ 
   newnode = new list;
   cout<<"Enter the data:";
   cin>>newnode ->data;
   newnode ->next =NULL;
   if(head==NULL)
   {
       temp=head=newnode;
   }
   else
    {
       newnode->next=head;
       head=newnode;
    }
}
void list::del()
{
    temp=head;
    cout<<"The Deleted element is:"<<temp->data;
    head=temp->next;
    delete temp;
}
void list:: display()
{
  cout<<"Elements in the list are:";
  temp=head;
  while(temp!=NULL)
  {
      cout<<temp->data<<" ";
      temp=temp->next;
  }
}
int main()
{   
    list l;
    int ch;
    while(1){
      cout<<"\nLinked list Operations:-\n";
      cout<<"1.Insert front\n";
      cout<<"2.Delete front\n";
      cout<<"3.Display\n";
      cout<<"4.Exit\n";
      cout<<"Enter your choice :";
      cin>>ch; 
        switch(ch){
            case 1:l.insert();break;
            case 2:l.del();break;
            case 3:l.display();break;
            case 4:exit(0);
            default :cout<<"Invalid Choice!!\n";
        }
    }
}
/*
OUTPUT:-

Linked list Operations:-
1.Insert front
2.Delete front
3.Display
4.Exit
Enter your choice :1    
Enter the data:1

Linked list Operations:-
1.Insert front
2.Delete front
3.Display
4.Exit
Enter your choice :1    
Enter the data:2

Linked list Operations:-
1.Insert front
2.Delete front
3.Display
4.Exit
Enter your choice :1
Enter the data:3

Linked list Operations:-
1.Insert front
2.Delete front
3.Display
4.Exit
Enter your choice :3
Elements in the list are:3 2 1

Linked list Operations:-
1.Insert front
2.Delete front
3.Display
4.Exit
Enter your choice :2
The Deleted element is:3

Linked list Operations:-
1.Insert front
2.Delete front
3.Display
4.Exit
Enter your choice :3
Elements in the list are:2 1

Linked list Operations:-
1.Insert front
2.Delete front
3.Display
4.Exit
Enter your choice :4*/




