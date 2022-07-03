#include <iostream>
using namespace std;
template <typename T>
void right_Shift(T *ele,int n,int r);
template < typename T >
void right_Shift (T *ele,int n,int r)
{
	for(int i=0;i < r;i++)
	{
		T temp=ele[n-1];
		for(int j=n-1;j > 0;j--)
			ele[j]=ele[j-1];
		ele[0]=temp;
	}
}
int main()
{
	int n, a[20],r;
	string s[10];
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>r;
	right_Shift(a,n,r);
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i];
	cin>>r;
	right_Shift(s,n,r);
	for(int i=0;i<n;i++)
		cout<<s[i]<<endl;

}