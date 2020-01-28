#include<iostream>
using namespace std;

int min (int a, int b)
{
	if(a<b)
	return a;
	return b;
}
int minsteps(int n)
{
	if (n==1){
		return 0;
	}
	
	int y, z;
	int x = minsteps(n-1);
	
	if(n%2==0){
		y = minsteps(n/2);
	}
	
	if (n%3==0){
		z = minsteps(n/3);
	}
	
	int mA = min(x, min(y,z)) + 1;
}

int main()
{
	int n;
	
	cout<<"Enter the number : ";
	
	cin>>n;
	
	cout<<minsteps(n);
	
	return 0;
	
}
