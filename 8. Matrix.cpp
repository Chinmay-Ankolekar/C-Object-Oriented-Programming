/*Write a C++ program to create a class called MATRIX using a 
two-dimensional array of integers. Implement the following 
operations by overloading the operator = = which checks the 
compatibility of two matrices to be added and subtracted. Perform 
the addition and subtraction by overloading the operators + and –
respectively. Display the results by overloading the operator <<.
If (m1= = m2)
{
m3 = m1 + m2;
m4 = m1 – m2;
}
else
display error*/

#include<iostream>
using namespace std;

class matrix
{
  private:int m[5][5];
  int row;int col;
  public:void getdata();
  int operator ==(matrix);
  matrix operator+(matrix);
  matrix operator-(matrix);
  friend ostream & operator << (ostream &,matrix &);
};

int matrix::operator==(matrix cm)
{
  if(row==cm.row && col==cm.col)
  {
    return 1;
  }
  return 0;
}

void matrix::getdata()
{
  cout<<"Enter the number of rows:";
  cin>>row;
  cout<<"Enter the number of columns:";
  cin>>col;
  cout<<"Enter the elements of the matrix\n";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
       cin>>m[i][j];
    }
  }
}

matrix matrix::operator+(matrix am)
{
  matrix temp;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      temp.m[i][j]=m[i][j]+am.m[i][j];
    }
    temp.row=row;
    temp.col=col;
  }
  return temp;
}

matrix matrix::operator-(matrix sm)
{
  matrix temp;
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      temp.m[i][j]=m[i][j]-sm.m[i][j];
    }
    temp.row=row;
    temp.col=col;
  }
  return temp;
}

ostream & operator <<(ostream &fout,matrix &d)
{
  for(int i=0;i<d.row;i++)
  {
    for(int j=0;j<d.col;j++)
    {
      fout<<d.m[i][j];
      cout<<" ";
    }
    cout<<endl;
  }
return fout;
}
int main()
{
  matrix m1,m2,m3,m4;
 
  m1.getdata();
  m2.getdata();
  if(m1==m2)
  {
    m3=m1+m2;
    m4=m1-m2;
    cout<<"Addition of matrices\n";
    cout<<"The result is\n";
    cout<<m3;
    cout<<"Subtraction of matrices\n";
    cout<<"The result is \n";
    cout<<m4;
  }
  else
  {
    cout<<"Order of the Input matrices is Not identical\n";
  }
}

/*OUTPUT:-
Enter the number of rows:3
Enter the number of columns:3
Enter the elements of the matrix
1 2 3 4 5 6 7 8 9
Enter the number of row:3
Enter the number of columns:3
Enter the elements of the matrix
1 2 3 4 5 6 7 8 9
Addition of matrices
the result is
2 4 6
8 10 12
14 16 18
subtraction of matrices
The result is
0 0 0
0 0 0
0 0 0 */
