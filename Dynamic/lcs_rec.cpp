#include <bits/stdc++.h>
using namespace std;
int lcs(int i, int j , string s1, string s2)
{
    if(s1[i]=='\0' || s2[j]=='\0')
    {
        return 0;
    }
    else if(s1[i]==s2[j])
    {
        return 1+lcs(i+1,j+1,s1,s2);
    }
    else
    {
        return max(lcs(i+1,j,s1,s2),lcs(i,j+1,s1,s2));
    }
}
int main()
{


    string s1, s2;
    s1="e";
    s2="abcd";
    cout<<lcs(0,0,s1,s2);
return 0;
}