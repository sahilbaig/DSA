
#include <bits/stdc++.h>
using namespace std;
struct  node
{
    int data;
    node* left;
    node* right;
};

// int max_dia=-1;
int mirror(node* root)
{    
    if(root==NULL)
    {
        return 0;
    }
    else
    {

        node* temp;
        
        temp=root->right;
        root->right=root->left;
        root->left=temp;
    }
   
}

int print(node* root)
{    
    if(root==NULL)
    {
        return 0;
    }
    else
    {

        
        cout<<root->data;
        print(root->left);
        print(root->right);
    }
   
}
     
int main()
{
node node1;
node node2;
node node3;

node1.data=1;
node1.left=&node2;
node1.right=&node3;

node2.data=2;
node2.left=NULL;
node2.right=NULL;

node3.data=3;
node3.left=NULL;
node3.right=NULL;

mirror(&node1);
print(&node1);
return 0;
}