#include<iostream>
using namespace std;

template <typename T>
class Array
{
 private:
	T *arrays;
	int SIZE;
 public:
	Array(int si){
		SIZE = si;
		arrays = new T[SIZE];
	}
	void read_elements(){
		for (int i = 0; i < SIZE; i++)
		{
			cin>>*(arrays + i);
		}
	}
	void sort(){
		for (int i = 0; i < SIZE; i++)
		{
			for (int j = i+1; j < SIZE; j++)
			{
				if (*(arrays + i) > *(arrays + j))
				{
					T temp;
					temp = *(arrays + i);
					*(arrays + i) = *(arrays + j);
					*(arrays + j) = temp;
				}
			}
		}
	}
	void display(){
		for (int i = 0; i < SIZE; i++)
		{
			if (i != SIZE - 1)
				cout << *(arrays + i) << ", ";
			else
				cout << *(arrays + i);
		}
		cout<<endl;
	}
};


int main(){
	int n;
	cout<<"Enter value of n:"<<endl;
	cin>>n;
	Array<int> int_array(n);
	Array<char> char_array(n);
	cout<<"Enter Integer array:"<<endl;
	int_array.read_elements();
	cout<<"Enter charactar array:"<<endl;
	char_array.read_elements();
	cout<<"Before sorting they are :"<<endl;
	int_array.display();
	char_array.display();
	int_array.sort();
	char_array.sort();
	cout<<"After sorting they are :"<<endl;
	int_array.display();
	char_array.display();
	return 0;
}