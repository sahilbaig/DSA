#include <bits/stdc++.h>
using namespace std;
int print(int num)
{
    if(num==0)
    {
        return 0;
    }

    else
    {
        print(num-1);
        cout<<num;
    }
}


int main()
{
 
print(7);
return 0;
}