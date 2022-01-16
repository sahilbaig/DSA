#include <bits/stdc++.h>
using namespace std;
int coin_change(int total,int coins[])
{
    int dp[4][total+1];

    for(int i=0;i<4;i++)
    {   
        dp[i][0]=0;
    }

    for(int i=1;i<=total;i++)
    {   
        dp[0][i]=i/coins[0];
    }

    for(int i=1;i<4;i++)
    {
        for(int j=1;j<=total;j++)
        {   
            if(j>=coins[i])
            {
               
               if(dp[i][j-coins[i]]<dp[i-1][j]){
                   dp[i][j]=dp[i][j-coins[i]]+1;
               }
               else
               {
                   dp[i][j]=dp[i-1][j];
               }
            }
            
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }


    for(int i=0;i<4;i++){
        for(int j=0;j<=total;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return 1;
}
int main()
{
    int total=11;
    int coins[4]={1,5,6,8};

    cout<<coin_change(total,coins);

return 0;
}