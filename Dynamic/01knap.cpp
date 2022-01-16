#include <bits/stdc++.h>
using namespace std;

int knapsack(int profit[4][2],int total)
{   
    int items=4;
    int dp[4][total+1];
    for(int i=0;i<items;i++)
    {
        dp[i][0]=0;
    }
    for(int i=0;i<=total;i++){
        if(i>=profit[0][0]){
            dp[0][i]=profit[0][1];
        }
        else{
            dp[0][i]=0;
        }
    }

    for(int i=1;i<items;i++)
    {
        for(int j=1;j<=total;j++)
        {
           if(j<profit[i][0])
           {
               dp[i][j]=dp[i-1][j];
           }
           else{
               dp[i][j]=max(
                                dp[i-1][j],
                                dp[i-1][j-profit[i][0]]+profit[i][1]

                        );
           }
        }
    }

    return dp[items-1][total];
}
int main()
{   
    int profit[4][2]={
        {5,60},
        {3,50},
        {4,70},
        {2,30}
    };

    int total=5;
    cout<<knapsack(profit,total);


 
    return 0;
}