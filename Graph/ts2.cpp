#include<bits/stdc++.h>
using namespace std;
int adjacency_matrix[4][4]=
{
    {0,1,0,1},
    {0,0,1,0},
    {0,0,0,0},
    {0,0,0,0},
};

struct graph
{
    int vertex=4;
    int **adjacency_matrix;
}G;

int visited[4]={0,0,0,0};
stack<int> sort_stack;
void topological_sort(int u)
{
    visited[u]=1;
    for (int i=0;i<3;i++)
    {
        if(adjacency_matrix[u][i]==1)
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