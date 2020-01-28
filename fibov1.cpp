#include<iostream>

using  namespace std;

void fib(int n)
{
	int a = -1, b = 1 , c ,i;
	
	for(i =0 ; i < n ; i++)
	{
		c = a + b;
		cout<<c<< " ";
		a = b;
		b = c;
	}
}

int main()
{
	int n;
	
	cout<<"Enter a number : ";
	cin>>n;
	fib(n);
	
	return 0;
}

