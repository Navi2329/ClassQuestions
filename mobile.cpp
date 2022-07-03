#include <iostream>
using namespace std;

class Mobile
{
 protected:
	int battery;
	int camera;
 public:
	void get_mobile(){
		cin>>battery;
		cin>>camera;
	}
};

class Apple:public Mobile
{
 protected:
	int rom;
	int ram;
 public:
	void get_Apple(){
		cin>>ram;
		cin>>rom;
	}
};

class Iphone:public Apple
{
 protected:
	string dateofrelease;
	float cost;
 public:
	void get_Iphone(){
		cin.ignore();
		getline(cin,dateofrelease);
		cin>>cost;
	}
	void display(){
		cout<<battery<<endl;
		cout<<camera<<endl;
		cout<<ram<<endl;
		cout<<rom<<endl;
		cout<<dateofrelease<<endl;
		cout<<cost;
	}
};

int main()
{
	Iphone obj;
	obj.get_mobile();
	obj.get_Apple();
	obj.get_Iphone();
	obj.display();
}