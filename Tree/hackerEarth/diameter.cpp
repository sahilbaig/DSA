#include <bits/stdc++.h>
using namespace std;
struct node 
{
    int data ;
    node * left;
    node * right;
};

int print_tree(node * root)
{
   if(root==NULL)
    {
        return 0;
    }
    else
    {
    int left_height=print_tree(root->left);
    int right_height=print_tree(root->right);
    if(left_height<right_height)
    {
        return right_height+1;
    }
    else
    {
        return left_height+1;
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
node1.left=&node2;
node1.right=&node3;

node2.data=2;
node2.left=&node4;
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


int height=print_tree(&node1);
cout<<height;
return 0;
}