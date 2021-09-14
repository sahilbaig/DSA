#include <bits/stdc++.h>
using namespace std;
int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }

    if(num==1)
    {
        return 1;
    }

    else
    {
        return fibo(num-1) + fibo(num-2);
    }
}
  
int main()
{
 
int flag=fibo(7);
cout<<(flag);
return 0;
}