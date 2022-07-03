#include <iostream>
using namespace std;

class school
{
 private:
	string name;
	int roll_no;
	float percent;
 public:
	void get_details();
	void show_details();
	float get_attendance();
	school(){
		name.empty();
		roll_no=0;
		percent=0;
	}
	~school(){
		cout<<"Objects destroyed successfully"<<endl;
	}
};

void school::get_details()
{
	cout<<"Enter name:";
	cin.ignore();
	getline(cin,name);
	cout<<"Enter Roll number:";
	cin>>roll_no;
	cout<<"Enter percentage:";
	cin>>percent;
}

void school::show_details()
{
	cout<<name<<endl;
	cout<<roll_no<<endl;
	cout<<percent<<endl;
}

float school::get_attendance()
{
	return percent;
}

void swap(school* ele1, school *ele2)
{
	school temp = *ele1;
	*ele1 = *ele2;
	*ele2 = temp;
}

void bubbleSort(school arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n-1; i++)
	{
		swapped = false;
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j].get_attendance()<arr[j+1].get_attendance())
			{
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

int main()
{
	int n;
	cout<<"Enter value of n:";
	cin>>n;
	school obj[n];
	for (int i=0;i<n;i++)
	{
		obj[i].get_details();
	}
	bubbleSort(obj,n);
	for (int i=0;i<3;i++)
		obj[i].show_details();
}