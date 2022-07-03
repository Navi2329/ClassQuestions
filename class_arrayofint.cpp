#include <iostream>
using namespace std;
class array
{
 private:
	int n;
	int arr[20];
 public:
	void read()
	{
		cout<<"Enter the number of elements: ";
		cin>>n;
		cout<<"Enter the elements: ";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	}
	void display()
	{
		cout<<"The elements in the array are : "<<endl;
		for(int i=0;i<n;i++)
			cout<<arr[i]<<endl;
	}
	void findlargest()
	{
		int abc=arr[0];
		for(int i=0;i<n;i++)
		{
			if(abc<=arr[i])
				abc=arr[i];
		}
		cout<<"The largest element is: "<<abc<<endl;
	}
	void findsmallest()
	{
		int abc=arr[0];
		for(int i=0;i<n;i++)
		{
			if(abc>=arr[i])
				abc=arr[i];
		}
		cout<<"The smallest element is: "<<abc<<endl;
	}
	void sum()
	{
		int i,sum=0;
		for(i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		cout<<"The sum of the elements is : "<<sum<<endl;
	}
	void mean()
	{
		int i,sum=0;
		float mean=0;
		for(i=0;i<n;i++)
		{
			sum+=arr[i];
		}
		mean = sum / n;
		cout<<"The mean of the elements is : "<< mean <<endl;
	}
}s;
int main()
{
	s.read();
	s.display();
	s.findlargest();
	s.findsmallest();
	s.sum();
	s.mean();
	return  0;
}