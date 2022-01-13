#include <bits/stdc++.h>
using namespace std;
int edit(string s1, string s2)
{   
    int n, m;
    m=s1.length()+1;
    n=s2.length()+1;

    int dp[m+1][n+1];
    for(int i=0;i<m;i++)
    {
        dp[0][i]=0;

    }
    
    for(int i=0;i<n;i++)
    {
        dp[i][0]=0;

    }



    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s1[j]==s2[i])
            {
                dp[i+1][j+1]=dp[i][j];
            }
            else{
                dp[i+1][j+1]=1+min(
                    min(dp[i][j],dp[i-1][j])
                    ,dp[i][j-1]);
            }
        }
    }

    
        for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return 1;
}
int main()
{
    string s1,s2;
    cin >>s1>>s2;
    edit(s1,s2);

 
return 0;
}