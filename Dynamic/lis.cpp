// longest increasing subsequence
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={3,4,-1,0,6,2,3};
    int lis[7]={1,1,1,1,1,1,1};

    // i,j {j>i} : {i=0;i<j;i++}
    // if arr[j]>arr[i]
    //  lis[j] = max{arr[j],arr[i]+1}


    for (int i=1;i<7;i++)                                    
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]>arr[j])
            {
                lis[i]=max(lis[i],lis[j]+1);   
            }
        }
    }


    for (int i=0;i<7;i++)
    {
        cout<<lis[i]<<" ";
    }
 
return 0;
}