//Program to check given number is prime or not using Recursion
#include<bits/stdc++.h>
using namespace std;
int Prime(int n,int i)
{
	if(n<i)
	{
		return 0;
	}
	if(n==i)
	{
		return 1;
	}
	if(n%i==0)
	{
		return 0;
	}
	if (i>=sqrt(n)+1)
	{
		return 1;
	}
	return Prime(n,i+1);
}
int main()
{
	int i=2,n,result;
	cout<<"Enter a number:";
	cin>>n;
	result=Prime(n,i);
	if(result==0)
	{
		cout<<"Not a prime number";
	}
	else
	{
		cout<<"It is a prime";
	}
}
