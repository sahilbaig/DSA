
#include <bits/stdc++.h>
using namespace std;
struct  node
{
    int data;
    node* left;
    node* right;
};

int count=0;
int find_height(node* root, node* a , node* b)
{   
    if(root==NULL)
    {
        return 0;
    }
    int left_height=find_height(root->left, a ,b);
    int right_height=find_height(root->right, a ,b);
    cout<<left_height<<"  "<<right_height<<endl;
    return 1;
}

node* lca(node* root, node* a, node* b)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root==a || root==b)
    {
        return root;
    }

    node* lefty=lca(root->left,a,b);
    node* righty= lca(root->right,a,b);

    if(lefty && righty)
    {
        return root;
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


node* result=lca(&node1,&node2,&node3);
find_height(result,&node2,&node3);
return 0;
}