#include <bits/stdc++.h>
using namespace std;
int path(int matrix[3][4],int row, int col)
{   

    int cost[row][col];
    cost[0][0]=matrix[0][0];
    for(int i=1;i<col;i++)
    {
        cost[0][i]=matrix[0][i]+cost[0][i-1];
    }

    for(int i=1;i<row;i++)
    {
        cost[i][0]=matrix[i][0]+cost[i-1][0];
    }


    for(int i=1;i<row;i++)
    {
        for(int j=1;j<col;j++)
        {
            cost[i][j]=min(cost[i-1][j],cost[i][j-1])+matrix[i][j];
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<cost[i][j]<<" ";
        }
        cout<<endl;
    }
    return cost[row-1][col-1];

}
int main()
{
    int matrix[3][4]={
        {1,3,5,8},
        {4,2,1,7},
        {4,3,2,3}
    };

    cout<<path(matrix,3,4);

return 0;
}