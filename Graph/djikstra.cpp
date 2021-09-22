#include <bits/stdc++.h>
using namespace std;

int adj_matrix[5][5]=
{
    {0,6,99,1,99},
    {6,0,5,2,99},
    {99,5,0,99,5},
    {1,2,99,0,1},
    {99,99,5,1,0}
};


int shortest_distance[5]={0,99,99,99,99};
int visited[5]={0};


// Infinity is defined as 99
int relax(int i)
{  
   
    // Relax other adjacent nodes 

    for(int k=0;k<5;k++)
    {
        if(shortest_distance[k])
        {   
            
            if(shortest_distance[i]+adj_matrix[i][k]<shortest_distance[k])
            {
                shortest_distance[k]=shortest_distance[i]+adj_matrix[i][k];
            }
        }
    }


    visited[i]=1;
    
}

int min_distance()
{
    // Find minimum distance of shortest_distance list
    // If node is unvisited return the node ie. shortest_distance[i]
    int min=99;
    int index;
    for(int i=0;i<5;i++)
    {
        if (shortest_distance[i]<min && visited[i]==0)
        {
            min=shortest_distance[i];
            index=i;
        }

    }

    return index;

}


int  main()
{


    int node;
    for(int i=0;i<5;i++)
    {
        
        // Find minimum unvisited vertex
        node=min_distance(); 
        // Of minimum unvisted vertex relax adjacent nodes
        relax(node);    
    }   
    
    for(int i=0;i<5;i++)
    {
        cout<<visited[i]<<" ";
    }
    
    cout<<endl;
    
    for(int i=0;i<5;i++)
    {
        cout<<shortest_distance[i]<<" ";
    }

    return 1;
}

// Algorithm 
// Step 1 : Find minimum value in shortest distance array and return its index
// Step 2 : Relax adjacent vertex of given node
// Step 3 : repeat till n-2