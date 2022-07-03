#include <iostream>
using namespace std;

class Bill
{
 private:
	int n;
	char names[30][30];
	int price[30];
 public:
	int total=0;
	void get_data()
	{
		cin>>n;
		for (int i=0;i<n;i++)
		{
			cin>>names[i];
			cin>>price[i];
			total+=price[i];
		}
	}

	void print()
	{
		cout<<"Item       price"<<endl;
		for (int i=0;i<n;i++)
		{
			cout<<names[i]<<"             "<<price[i]<<endl;
		}
		cout<<total<<endl;
	}
};
class pay:public Bill{
 private:
	int num,num1;
	char name[30][30];
	int prices[30];
 public:
	void get_data()
	{
		cin>>num1;
		cin>>num;
		for (int j=0;j<num;j++)
			cin>>name[j]>>prices[j];
	}
	void print_data()
	{
		cout<<num<<endl;
		cout<<name[0]<<"      "<<prices[0]<<endl;
		cout<<name[1]<<"        "<<prices[1]<<endl;
		cout<<name[2]<<"         "<<prices[2]<<endl;
	}
};
int main()
{
	Bill obj1;
	pay obj2;
	obj1.get_data();
	obj1.print();
	obj2.get_data();
	obj2.print_data();
}