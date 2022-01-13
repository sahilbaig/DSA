#include <bits/stdc++.h>
using namespace std;
int main()
{


    int arr[50];
    arr[0]=1;
    arr[1]=1;
    int num;
    cin>>num;
    for(int i=2;i<50;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        if(i==num)
        {
            cout<<arr[i]<<endl;
            break;
        }
    }
    
 
return 0;
}