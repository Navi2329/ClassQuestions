#include <iostream>
#include <stdio.h>
using namespace std;
class Student
{
 private:
	string reg_no;
	string name;
	int age;
	char sex;
	int marks;
	string address;
	long int mobile;
	friend void eligibility(Student obj);
 public:
	void get_data()
	{
		getline(cin,reg_no);
		getline(cin,name);
		cin>>age;
		cin>>sex;
		cin>>marks;
		cin>>address;
		cin>>mobile;
	}
};

void eligibility(Student obj)
{
	cout<<obj.reg_no<<endl;
	cout<<obj.name<<endl;
	cout<<obj.age<<endl;
	cout<<obj.sex<<endl;
	cout<<obj.marks<<endl;
	cout<<obj.address<<endl;
	cout<<obj.mobile<<endl;
	if (obj.marks>800)
		cout<<"Eligible";
	else
		cout<<"Not Eligible";
}
int main()
{
	Student obj;
	obj.get_data();
	eligibility(obj);
	return 0;
}