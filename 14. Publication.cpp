/*Define a class Publication which has a title. Derive two classes from it – a 
class Book which has an accession number and a class Magazine which 
has volume number.With these two as bases,derive the class Journal. 
Define a function print() in each of these classes.Ensure that the derived 
class function always invokes the base(s) class function. In main() create 
a Journal called IEEEOOP with an accession number 681.3 and a volume 
number 1.Invoke the print() function for this object
*/

#include<iostream>
using namespace std;

class publication{
    public:
    string title;
    publication(){
        title="IEEEOOP";
    }
    void print(){
        cout<<"TITLE : "<<title<<endl;
    }
};
class book:public publication{
    public:
    float an;
    book(){
        an=681.3;
    }
    void print(){
        publication::print();
        cout<<"ACCESSION NUMBER : "<<an<<endl;
    }
};
class mag:public publication{
    public:
    int vol;
    mag(){
        vol=1;
    }
    void print(){
        cout<<"VOLUME : "<<vol<<endl;
    }
};
class journal:public book,mag{
    public:
    void print(){
        book::print();
        mag::print();
    }
};
int main(){
    journal IEEEOOP;
    IEEEOOP.print();
    return 0;
}

/*
OUTPUT:-
TITLE : IEEEOOP
ACCESSION NUMBER : 681.3
VOLUME : 1
*/