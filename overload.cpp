#include <iostream>
using namespace std;
class Compare{
	int a;
	string str;
 public:
	void operator >>(Compare &b){
		cin>>a>>str;
	}
	void operator<<(Compare &b){
		cout<<a<<" "<<str<<endl;
	}
	bool operator ==(Compare &b){
		if((a==b.a) && (str == b.str))
			return 1;
		else
			return 0;
	}
};
int main(){
	Compare obj1,obj2;
	obj1>>obj2;
	obj2>>obj1;
	if((obj1==obj2)==1) {
		obj1<<obj2;
		obj2<<obj1;
		cout<<"Both Objects are Equal";
	}
	else
		cout<<"Both Objects are not Equal";
}