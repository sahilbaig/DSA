#include<bits/stdc++.h>
using namespace std;
int adjacency_matrix[6][6]=
{
    {0,0,0,1,0,0},
    {0,0,0,0,0,0},
    {1,0,0,0,0,0},
    {0,1,0,0,0,0},
    {1,0,1,0,0,0}
};

struct graph
{
    int vertex=6;
    int **adjacency_matrix;
}G;

int visited[6]={0,0,0,0,0,0};
stack<int> sort_stack;
int topological_sort(int u)
{
    visited[u]=1;
    for(int i=0;i<u;i++)
    {
        if(adjacency_matrix[u][i]==1 && visited[i]==0)
        {
            topological_sort(i);
        }
    }

    sort_stack.push(u);
}
int main()
{   

    for(int i=0;i<G.vertex;i++)
    {
        if(!visited[i]) 
        {
            topological_sort(i);
        }      
    }

    while (!sort_stack.empty())
    {
        cout<<sort_stack.top();
        sort_stack.pop();
    }
    
    return 1;
}