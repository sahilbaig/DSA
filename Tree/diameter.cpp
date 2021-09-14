
#include <bits/stdc++.h>
using namespace std;
struct  node
{
    int data;
    node* left;
    node* right;
};

int max_dia=-1;
int size(node* root)
{    if (root==NULL)
    {
        return 0;
    }

    else
    {   
       
        int left_height=size(root->left);
        int right_height=size(root->right);
        // cout<<left_height<<" "<<right_height<<endl;
        if(left_height+right_height+1>max_dia)
        {
            max_dia=left_height+right_height+1;
        }
        if(left_height>right_height)
        {
            return left_height+1;
        }
        else
        {   
            return right_height+1;
        }
    


       
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
node1.left=NULL;
node1.right=NULL;

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


int diameter=size(&node1);
cout<<max_dia;
return 0;
}