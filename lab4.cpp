#include<iostream>
using namespace std;
struct student
{
	char name[20];
	int rollno;
	float marks;
};
int main()
{
	student s[100];
	int n,i,loc;
	float marks1;
	cout<<"enter the no of students:\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter name,rollno and marks of the student:\n"<<i+1;
		cin>>s[i].name>>s[i].rollno>>s[i].marks;
	}
	marks1=0.0;
	loc =0;
	for(i=0;i<n;i++)
	{
		if(s[i].marks >marks1)
		{
			loc =i;
			marks1 =s[i].marks;
		}
	}
	cout<<" the name of the student with maximum marks is: "<<s[loc].name<<endl;
	return 0;

}
