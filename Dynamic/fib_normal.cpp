#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    
    return fib(n-2)+fib(n-1);
}
int main()
{
 
int num;
cin>>num;

cout<<fib(num);
return 0;
}