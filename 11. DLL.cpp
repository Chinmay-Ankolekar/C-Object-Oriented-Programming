/*Write a C++ program to create a class called DLIST (Doubly Linked 
List) with member functions to insert a node at a specified position and 
delete a node from a specified position of the list. Demonstrate the 
operations by displaying the content of the list after every operation.*/

#include<iostream>
using namespace std;

class DLIST{
    int data,n,i,pos,count;
    DLIST *prev,*next;
    public:
      void create();
      void insert();
      void del();
      void dis();
} *head=NULL,*temp=NULL,*newnode,*tail=NULL;
void DLIST::create(){
    cout<<"Enter the Number of Nodes to be created:";
    cin>>n;
  for(i=0;i<n;i++){
    newnode = new DLIST;
    cout<<"Enter the data field:";
    cin>>newnode->data;
    newnode->next=NULL;
    newnode->prev=NULL;
   if(head==NULL)
    head=temp=newnode;
   else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=temp->next;
        }
    }
}
void DLIST::insert(){
    newnode = new DLIST;
    cout<<"Enter the data field:";
    cin>>newnode->data;
    newnode->next=NULL;
    newnode->prev=NULL;
    cout<<"Enter the position:";
    cin>>pos;
    temp=head;
    count=1;
   if(count<pos){
       while(count<pos){
           temp=temp->next;
           count++;
    }
     newnode->prev=temp->prev;
     temp->prev->next=newnode;
     temp->prev=newnode;
     newnode->next=temp;}
   else if(count==pos){
      newnode->next=head;
      head->prev=newnode;
      newnode->prev=NULL;
      head=newnode;
    }       
}
void DLIST::del(){
    cout<<"Enter the position:";
    cin>>pos;
    temp=head;
    count=1;
  if(head==NULL)
    cout<<"Underflow!!\n";
else if(count<pos){
  while(count<pos){
    temp=temp->next;
    count++;
}
  temp->prev->next=temp->next;
  temp->next->prev=temp->prev;
  free(temp);
    }
 else if(count==pos){
     temp=head;
     temp->next->prev=NULL;
     head=temp->next;
     delete temp;
 }
}
void DLIST::dis(){
    temp=head;
    if(head==NULL)
    cout<<"List is empty\n";
    else{
    while(temp->next!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }cout<<temp->data<<"  "<<endl;;
}
}
int main(){
    int ch;
    DLIST d;
    while(1){
    cout<<"Double Linked List:-"<<endl;
    cout<<"1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit\nEnter your choice:"<<endl;
    cin>>ch;
    switch(ch){
        case 1:d.create();
               break;
        case 2:d.insert();
               break;
        case 3:d.del();
               break;
        case 4:d.dis();
               break;
        case 5:exit(0);
        default:cout<<"Invalid Choice!!\n";
     }
  }
    return 0;
}

/* OUTPUT:-
     Double Linked List:-
       1.Create
       2.Insert
       3.Delete
       4.Display
       5.Exit
      Enter your choice :1
      Enter the Number of Nodes to be created:5
      Enter the data field:1
      Enter the data field:2
      Enter the data field:3
      Enter the data field:4
      Enter the data field:5

     Double Linked List:-
       1.Create
       2.Insert
       3.Delete
       4.Display
       5.Exit
      Enter your choice:2
      Enter the data field:2
      Enter the position:3

     Double Linked List:-
      1.Create
      2.Insert
      3.Delete
      4.Display
      5.Exit
     Enter your choice:4
      1  2  2  3  4  5

     Double Linked List:-
      1.Create
      2.Insert
      3.Delete
      4.Display
      5.Exit
     Enter your choice:3
     Enter the position:3

     Double Linked List:-
      1.Create
      2.Insert
      3.Delete
      4.Display
      5.Exit
     Enter your choice:4
      1  2  3  4  5
      
     Double Linked List:-
      1.Create
      2.Insert
      3.Delete
      4.Display
      5.Exit
      Enter your choice:5*/



