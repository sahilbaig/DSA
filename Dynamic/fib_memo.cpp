#include <bits/stdc++.h>
using namespace std;

int arr[50];


int fib(int n)
{
    if(arr[n]!=-1)
    {   
        return arr[n];
    }
    if(n<=1)
    {
        arr[n]=1;
        return arr[n];
    }
    
    return fib(n-2)+fib(n-1);
}
int main()
{
for(int i=0;i<50;i++)
{
    arr[i]=-1;
}

int num;
cin>>num;
cout<<fib(num);
return 0;
}