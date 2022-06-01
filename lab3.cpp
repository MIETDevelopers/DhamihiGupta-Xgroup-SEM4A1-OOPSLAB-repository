#include<iostream>
using namespace std;

class student
{
private :
char name[20];
float marks;
int rollnumber;

public :
void input ()
{
    cin>>name>>rollnumber>>marks;
}
float marksset()
{
    return marks;
}
void print()
{
    cout<<name;
}
};
int main ()
{
    student S[100];
    int n,i,loc;
    float marks;
    cout<<"Enter the value for n :";
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
    cout<<"Enter the name ,rollnumber and marks of the student :\n"<<i+1;
    S[i].input();
    }
    marks =0.0;
    loc = 0;
    for(i=0;i<=n-1;i++)
    {
        if (S[i].marksset () > marks)
        {
            marks = S[i] . marksset ();
            loc = 1;
        }
    }
    S[loc] .print();
    return 0;
}
