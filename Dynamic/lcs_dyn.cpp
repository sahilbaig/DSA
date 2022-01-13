#include <bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2)
{       
    int n,m;
    n=s1.length()+1;
    m=s2.length()+1;

    int dp[n+1][m+1];

    for(int i=0;i<n;i++)
    {
        dp[0][i]=0;
    }
    for(int i=0;i<m;i++){
        dp[i][0]=0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s1[i]==s2[j]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

   return dp[n-1][m-1];
}
int main()
{   

    string s1,s2;
    cin >>s1>>s2;

    cout<<lcs(s1,s2);
 
    return 0;
}