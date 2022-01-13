#include <bits/stdc++.h>
using namespace std;
int arr_create(int m)
{   
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin >>arr[i];
    }
    for(int i=0;i<m;i++)
    {
       cout<<arr[i];
    }
    
    
    return 1;
}
int main()
{
    int a;
    cin >>a;
    arr_create(a);
 
return 0;
}