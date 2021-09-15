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


struct graph
{
    int vertex=6;
    int **adjacency_matrix;
}G;

int visited[6]={0,0,0,0,0,0};

queue<int> print;


int main()
{   

    print.push(0);
    while(!print.empty())
    {
        int data=print.front();
        cout<<data;
        print.pop();
        visited[data]=1;
        for(int i=0;i<G.vertex;i++)
        {
            if(adjacency_matrix[data][i]==1)
            {
                if(visited[i]!=1)
                {   
                    visited[i]=1;
                    print.push(i);
                }
                
            }
        }

    }   
     return 0;
}
