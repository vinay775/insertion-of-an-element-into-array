#include<iostream>
using namespace std;
int main()
{
	int i,n,a[50],element,location;
	cout<<"Enter the value of n:";
	cin>>n;
	cout<<"Enter the array elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Entered array elements are:";
	for(i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
	cout<<"Enter value of element:";
	cin>>element;
	cout<<"Enter the value of location:";
	cin>>location;
	for(i=n-1;i>=location;i--)
	{
		a[i+1]=a[i];
	}
	a[location]=element;
	return 0;
}
