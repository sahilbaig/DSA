
#include <bits/stdc++.h>
using namespace std;
struct  node
{
    int data;
    node* left;
    node* right;
};

int large=-1;
int size(node* root)
{   
    if (root==NULL)
    {
        return 0;
    }

    else
    {
        return size(root->left)+size(root->right)+1;
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
node2.left=&node4;
node2.right=&node5;

node3.data=3;
node3.left=NULL;
node3.right=NULL;


node4.data=4;
node4.left=NULL;
node4.right=NULL;


node5.data=5;
node5.left=NULL;
node5.right=NULL;


node6.data=6;
node6.left=NULL;
node6.right=NULL;


node7.data=7;
node7.left=NULL;
node7.right=NULL;


int data=size(&node1);
cout<<data;
return 0;
}