#include <bits/stdc++.h>
using namespace std;
int main()
{
    int graph[9][9]={
        {0,0,0,0,0,0,0,0,0},
        {0,0,2,1,3,0,0,0,0},
        {0,0,0,0,0,2,3,0,0},
        {0,0,0,0,0,6,7,0,0},
        {0,0,0,0,0,6,0,9,0},
        {0,0,0,0,0,0,0,0,6},
        {0,0,0,0,0,0,0,0,4},
        {0,0,0,0,0,0,0,0,5},
        {0,0,0,0,0,0,0,0,0}
    };

    int cost[9];
    int d[9];
    int path[9];
    int n=8;

    cost[n]=0;
    d[n]=n;
    
    // run loop from n-1 row and find min 
    for(int i=n-1;i>=1;i--)
    {   
        int min=INT_MAX;
        int next_node=0;
        int cost_min=0;
        for(int j=i+1;j<=n;j++)
        {
            if(graph[i][j]!=0 && (graph[i][j]+cost[j])<min)
            {
                min=graph[i][j]+cost[j];
                next_node=j;
            }
        }

        cost[i]=min;
        d[i]=next_node;

        
        // cout<<cost_min<<" ";

    }
    int node_now=1;
    while(node_now!=n)
    {
        cout<<d[node_now]<<" ";
        node_now=d[node_now];
    }
    
 
return 0;
}