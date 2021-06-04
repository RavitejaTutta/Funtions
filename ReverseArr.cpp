//Reversing an array using Recursive method
#include<bits/stdc++.h>
using namespace std;
int Reverse(int l,int r,int a[])
{
	if(l>=r)
	return 0;
	swap(a[l],a[r]);
	return Reverse(l+1,r-1,a);
}
int main()
{
	int n,temp,i,j;
	cout<<"Enter array length:";
	cin>>n;
	int a[n];
	cout<<"Enter "<<n<<" elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
    Reverse(0,n-1,a);
	cout<<"Reverse of elements are:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
