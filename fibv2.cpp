#include<iostream>

using  namespace std;

int fibo_helper(int n, int *ans)
{
	if(n==0 || n== 1)
	  return n;
	  
	if(ans[n]!=-1)
	   return ans[n];
	
	int sA1 = fibo_helper(n-1,ans);
	int sA2 = fibo_helper(n-1,ans);		
	int mA = sA1 + sA2;
	
	ans [n] = mA;
	return mA;
}

int fibo2(int n)
{
  int * ans = new int[n+1];
  
  for(int i =0; i<=n; i++)
    ans[i] = -1;	

  return fibo_helper(n,ans);
}


int main()
{
	int n;
	
	cout<<"Enter a number : ";
	cin>>n;
	cout<< fibo2(n);
	
	return 0;
}

