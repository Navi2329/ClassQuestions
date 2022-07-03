#include <iostream>
using namespace std;

class calculator
{
 private:
	float operand1;
	float operand2;
	char operator1;
 public:
	void get_details()
	{
		cin>>operand1>>operand2>>operator1;
	}
	void show_result()
	{
		switch(operator1){
		case '+':
			cout<<(int)(operand1+operand2);
			break;
		case '-':
			cout<<(int)(operand1-operand2);
			break;
		case '*':
			cout<<(int)(operand1*operand2);
			break;
		case '/':
			cout<<(int)(operand1/operand2);
			break;
		default:
			cout<<"Please Enter Valid operator";
		}
	}
};

int main()
{
	calculator obj;
	obj.get_details();
	obj.show_result();
}
