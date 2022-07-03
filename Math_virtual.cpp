#include <iostream>
using namespace std;

class MathSymbol
{
 public:
	virtual int do_operation()=0;
};

class Plus
{
 private:
	int num1,num2;
 public:
	void get_num(){
		cin>>num1>>num2;
	}
	int do_operation(){
		return num1+num2;
	}
};

class Minus
{
 private:
	int num1,num2;
 public:
	void get_num(){
		cin>>num1>>num2;
	}
	int do_operation(){
		return num1-num2;
	}
};

int main()
{
	Plus obj1;
	Minus obj2;
	cout<<"Enter 2 numbers for addition:";
	obj1.get_num();
	cout<<"The sum of the two numbers is: "<<obj1.do_operation()<<endl;
	cout<<"Enter 2 numbers for subtraction:";
	obj2.get_num();
	cout<<"The difference of two numbers is: "<<obj2.do_operation()<<endl;

}