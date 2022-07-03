//pure virtual function

#include <iostream>
using namespace std;

class shape// a class which contains a pure virtual function is called abstract class
{
 public:
	//pure virtual functions
	virtual float calculate_area()=0;
	virtual float calculate_perimeter()=0;
};

class rectangle:public shape
{
 private:
	float length;
	float breadth;
 public:
	void get_dimensions()
	{
		cin>>length;
		cin>>breadth;
	}
	float calculate_area()
	{
		return length*breadth;
	}
	float calculate_perimeter()
	{
		return 2*(length+breadth);
	}
};

class rhombus:public shape
{
 private:
	float d1;
	float d2;
	float side;
 public:
	void get_dimensions()
	{
		cin>>d1;
		cin>>d2;
		cin>>side;
	}
	float calculate_area()
	{
		return 0.5*d1*d2;
	}
	float calculate_perimeter()
	{
		return 4*side;
	}
};

class square:public rectangle,public rhombus
{
 private:
	float length;
	float breadth;
 public:
	void get_dimensions()
	{
		cin>>length;
		cin>>breadth;
	}
	float calculate_area()
	{
		return length*breadth;
	}
	float calculate_perimeter()
	{
		return 4*length;
	}
};

int main()
{
	square obj;
	char choice;
	cin>>choice;
	if (choice=='r' || choice=='R')
	{
		obj.rhombus::get_dimensions();
		cout<<obj.rhombus::calculate_area()<<endl;
		cout<<obj.rhombus::calculate_perimeter()<<endl;
	}
	if (choice=='h' || choice=='H')
	{
		obj.rectangle::get_dimensions();
		cout<<obj.rectangle::calculate_area()<<endl;
		cout<<obj.rectangle::calculate_perimeter()<<endl;
	}
	if (choice=='s' || choice=='S')
	{
		obj.get_dimensions();
		cout<<obj.calculate_area()<<endl;
		cout<<obj.calculate_perimeter()<<endl;
	}
	return 0;
}