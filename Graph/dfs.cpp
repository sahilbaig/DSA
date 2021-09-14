#include<bits/stdc++.h>
using namespace std;
int adjacency_matrix[5][5]=
{
    {0,1,0,0,1},
    {1,0,1,1,0},
    {0,1,0,0,0},
    {0,1,0,1,0},
    {1,0,0,0,0}
};

struct graph
{
    int vertex=5;
    int **adjacency_matrix;
}G;

int visited[5]={0,0,0,0,0};
int dfs(struct graph *G, int u)
{   
    // This determines that node is visited.
    visited[u]=1;
    for(int i=0;i<5;i++)
    {
        cout<<visited[i]<<" ";
    }

    cout<<"-->"<<u;
    cout<<endl;
    // Now we 
    for(int i=0;i<G->vertex;i++)
        {
            if(!visited[i] && adjacency_matrix[u][i])
            {   
            
                dfs(G,i);
            }
        }
    return 1;
}

void DFS_traversal(struct graph *g)
{
    for(int i=0;i<g->vertex;i++)
    {
        if(!visited[i])
        {
            dfs(g,i);
        }
    }
}
// Condition is 
// If it is not viisted and adj[u][v]==1
// Then call dfs(G,u)
int main()
{   
    DFS_traversal(&G);
    return 0;
}