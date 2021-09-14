#include <bits/stdc++.h>
using namespace std;
struct node 
{
    int data ;
    node * left;
    node * right;
};

int max_count=0;
int count(node * root )
{
    if(root)
    {
        
        if(root->data==1)
        {   
            max_count++;
            
        }
        count(root->left);
        count(root->right);
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

node2.data=1;
node2.left=&node4;
node2.right=NULL;

node3.data=1;
node3.left=NULL;
node3.right=NULL;


node4.data=1;
node4.left=NULL;
node4.right=NULL;


node5.data=5;
node5.left=NULL;
node5.right=NULL;


count(&node1);

cout<<max_count;
return 0;
}