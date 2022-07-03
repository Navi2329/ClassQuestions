#include <iostream>
using namespace std;

class Employee
{
 protected:
	int emp_id;
	char emp_name[20];
	int salary;
};

class Details:public Employee
{
 public:
	void get_data()
	{
		cout<<"Enter Emp_id:";
		cin>>emp_id;
		cout<<"Enter Emp_name";
		cin>>emp_name;
		cout<<"Enter Salary:";
		cin>>salary;
	}
	void display()
	{
		cout<<"ID:"<<emp_id<<endl;
		cout<<"name:"<<emp_name<<endl;
		cout<<"Salary:"<<salary<<endl;
	}
};

int main()
{
	Details d1,d2,d3,d4,d5;
	d1.get_data();
	d2.get_data();
	d3.get_data();
	d4.get_data();
	d5.get_data();
	d1.display();
	d2.display();
	d3.display();
	d4.display();
	d5.display();
}