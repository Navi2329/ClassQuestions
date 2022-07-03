#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
 private:
	float s1,s2,s3;
 public:
	void area();
	void perimeter();
	Triangle()
	{
		s1=3;
		s2=4;
		s3=5;
	}
	Triangle(float a,float b,float c)
	{
		s1=a;
		s2=b;
		s3=c;
	}
	Triangle(Triangle &obj)
	{
		s1=obj.s1;
		s2=obj.s2;
		s3=obj.s3;
	}
};

void Triangle::area()
{
	float s=(s1+s2+s3)/2;
	float ar=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	cout<<"Area of rectangle("<<s1<<s2<<s3<<") is:";
	cout<<ar<<endl;
}

void Triangle::perimeter()
{
	cout<<"Perimeter of triangle("<<s1<<s2<<s3<<") is:";
	cout<<s1+s2+s3<<endl;
}

int main()
{
	float s1,s2,s3;
	Triangle T1;
	T1.area();
	T1.perimeter();
	Triangle T3=T1;
	T3.area();
	T3.perimeter();
	cin>>s1>>s2>>s3;
	Triangle T2(s1,s2,s3);
	T2.area();
	T2.perimeter();
	return 0;
}