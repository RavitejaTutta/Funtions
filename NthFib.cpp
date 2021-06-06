//Program to find n'th fibnocci number using recursion
#include<bits/stdc++.h>
using namespace std;
 int Fibnocci(int n)
{
    if (n <= 1)
    {
    	 return n;
	}
    return Fibnocci(n-1)+Fibnocci(n-2);
}
 
int main ()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout <<"The "<<n<<" Fibnocci number is:"<<Fibnocci(n);
    return 0;
}
 
