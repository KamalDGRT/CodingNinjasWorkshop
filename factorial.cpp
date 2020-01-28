#include <iostream>

using namespace std;

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    int sA = fact(n-1);
    int mA = n * sA;
    return mA;
}

int main()
{
    cout<<fact(4)<<endl;
    return 0;
}