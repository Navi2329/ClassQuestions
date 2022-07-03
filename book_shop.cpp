#include <iostream>
using namespace std;

class media
{
 protected:
	string title;
	float price;
 public:
	media(string s,float p1)
	{
		title=s;
		price=p1;
	}
	virtual void display()=0;
};

class Book:public media
{
 private:
	int pages;
 public:
	Book(string s,float p1,int p):media(s,p1){
		pages=p;
	}
	void display()
	{
		cout<<"Title of the book is: "<<title<<endl;
		cout<<"Number of pages in the book is:"<<pages<<endl;
		cout<<"Price of the book is: "<<price<<endl;
	}
};

class tape:public media
{
 private:
	float time;
 public:
	tape(string s,float p1,int t):media(s,p1){
		time=t;
	}
	void display()
	{
		cout<<"Title of the book is: "<<title<<endl;
		cout<<"Play time of the tape is:"<<time<<endl;
		cout<<"Price of the book is: "<<price<<endl;
	}
};

int main()
{
	string title;
	float price,time;
	int pages;
	cout<<"Enter title of the book";
	cin>>title;
	cout<<"Enter price of the book:";
	cin>>price;
	cout<<"Enter number of pages in the book";
	cin>>pages;
	Book obj1(title,price,pages);
	cout<<"Enter title of the tape";
	cin>>title;
	cout<<"Enter price of the tape:";
	cin>>price;
	cout<<"Enter play time of the tape:";
	cin>>time;
	tape obj2(title,price,time);
	obj1.display();
	obj2.display();
}