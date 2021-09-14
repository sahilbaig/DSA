#include <bits/stdc++.h>
using namespace std;
int adjacency_matrix[6][6]=
{
    {0,1,1,0,0,0},
    {1,0,0,1,1,0},
    {1,0,0,0,1,0},
    {0,1,0,0,1,1},
    {0,0,1,1,0,1},
    {0,0,0,1,1,0}
};
int visited[6]={0,0,0,0,0,0};
struct graph
{
    int vertex=6;
    int **adjacency_matrix;
}G;

int dfs_traversal(graph g , int u)
{   
    visited[u]=1;
    cout<<u<<" ";
    for(int i=0;i<g.vertex;i++)
    {
        if(adjacency_matrix[u][i]==1)
        {   

            if(visited[i]!=1)
            {
                dfs_traversal(g,i);
            }
        }
    }

}

int dfs(graph g)
{
    for(int i=0;i<g.vertex;i++)
    {
        if(visited[i]==0)
        {
            dfs_traversal(g,i);
        }
    }

    return 1;
}


int main()
{   
    

    dfs(G);

    return 0;
}