#include <iostream>
using namespace std;

int power(int x,int n)
{
	if(n==0)
	  return 1;
	else
	{
		int sA = power(x,n-1);
		int mA = x*sA;
		return mA;
	}
	 
}

int main()
{
   int n,x;
   
   cout<<"Enter a number : ";
   cin>>x;
   cout<<" To the power : ";
   cin>>n;
   
   cout<<power(x,n);
   
   return 0;
}
