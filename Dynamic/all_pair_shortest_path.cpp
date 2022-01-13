#include <bits/stdc++.h>
using namespace std;
int main()
{

int graph[4][4]={
    {0,3,99,7},
    {8,0,2,99},
    {5,99,0,1},
    {2,99,99,0}
};


for(int k=0;k<4;k++)
{

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            graph[i][j]=min(graph[i][j],(graph[i][k]+graph[k][j]));
        }
    }
}



    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }


return 0;
}