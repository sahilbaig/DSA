
#include <bits/stdc++.h>
using namespace std;
struct  node
{
    int data;
    node* left;
    node* right;
};

int path[100];
int sum_find(node* root,int path_len,int final_sum)
{   
    
    if (root==NULL)
    {
        return 0;

    }
    
    path[path_len]=root->data;
    path_len++;
    final_sum=final_sum-root->data;
    // cout<<"final"<<final_sum<<endl;
    if(root->right==NULL && root->left==NULL && final_sum==0)
    {
        for(int i=0;i<path_len;i++)
        {   
            cout<<path[i];
        }
        cout<<endl;
    }
    else
    {
            sum_find(root->left,path_len,final_sum) ;
            sum_find(root->right,path_len,final_sum);

    }




   
}
     
int main()
{
node node1;
node node2;
node node3;
node node4;
node node5;
node node6;
node node7;

node1.data=1;
node1.left=&node2;
node1.right=&node3;

node2.data=2;
node2.left=NULL;
node2.right=NULL;

node3.data=3;
node3.left=NULL;
node3.right=NULL;


node4.data=4;
node4.left=NULL;
node4.right=NULL;


node5.data=5;
node5.left=NULL;
node5.right=NULL;


int data=sum_find(&node1,0,3);
return 0;
}