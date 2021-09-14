#include <bits/stdc++.h>
using namespace std;
int check_sort(int arr[],int num)
{
    if(num==0)
    {
        return 1;
    }

    else{
        
        if(arr[num]>arr[num-1])
        {
            check_sort(arr,num-1);
        }
        else
        {
            return 0;
        }
    }

}
int main()
{

int arr[5]={1,2,3,4,5};
int flag=check_sort(arr,5);
cout<<flag;
return 0;
}