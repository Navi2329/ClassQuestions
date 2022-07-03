#include <iostream>
using namespace std;

class Person
{
 public:
	string name;
	int age;
	char gender;
	void get_details()
	{
		getline(cin,name);
		cin>>age;
		cin>>gender;
	}
};

class Student:public Person
{
 private:
	int roll;
	string branch,temp;
 public:
	void student_info(){
		cin>>roll;
		getline(cin,temp);
		getline(cin,branch);
	}
	void print_student(){
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<gender<<endl;
		cout<<roll<<endl;
		cout<<branch<<endl;
	}
};
class Faculty:public Person
{
 private:
	string designation,temp;
	string branch;
 public:
	void get_factulty()
	{
		getline(cin,temp);
		getline(cin,designation);
		getline(cin,branch);
	}
	void print_faculty(){
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<gender<<endl;
		cout<<designation<<endl;
		cout<<branch<<endl;
	}
};

class Publications:public Faculty
{
 private:
	int p1,p2,p3;
 public:
	void get_pub()
	{
		cin>>p1>>p2>>p3;
	}
	void print_pub()
	{
		cout<<p1<<endl;
		cout<<p2<<endl;
		cout<<p3<<endl;
	}
};
int main()
{
	Student obj1;
	Publications obj2;
	obj1.get_details();
	obj1.student_info();
	obj2.get_details();
	obj2.get_factulty();
	obj2.get_pub();
	obj1.print_student();
	obj2.print_faculty();
	obj2.print_pub();
}