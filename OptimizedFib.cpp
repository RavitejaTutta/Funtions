//Program to find n'th fibnocci number using recursion
#include<bits/stdc++.h>
using namespace std;
int dp[100000];
 int Fibnocci(int n)
{
    if (n <= 1)
    {
    	 return n;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
    return dp[n]=Fibnocci(n-1)+Fibnocci(n-2);
}
 
int main ()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	dp[i]=-1;
	}
    cout <<"The "<<n<<" Fibnocci number is:"<<Fibnocci(n-1)<<endl;
    for(int i=0;i<n;i++){
    	cout<<dp[i]<<" ";
	}
    return 0;
}
 
