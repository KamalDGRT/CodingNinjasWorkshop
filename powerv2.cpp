#include <iostream>
using namespace std;

int power(int x,int n)
{
	int mA;
	int sA = power(x,n/2);
	if(n%2!=0)
	  mA=x * sA * sA;
	else
	{
		mA = sA * sA;
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
