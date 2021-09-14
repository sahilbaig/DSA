
#include <bits/stdc++.h>
using namespace std;
struct  node
{
    int data;
    node* left;
    node* right;
};

int heapify(node * root)
{   
    if(root->left!=NULL && root->right!=NULL)
    {    
        // find max of children
        int left=root->left->data;
        int right=root->right->data;
        int max;
        if(left>right)
        {
            if(root->data<left)
            {
                int temp=root->left->data;
                root->left->data=root->data;
                root->data=temp;

            }
            else
            {
                int temp=root->right->data;
                root->right->data=root->data;
                root->data=temp;

            }
        }
        else
        {
            max=right;
        }
    }
    else
    {
        cout<<"got a something";
    }
    // cout<<root->left->data<<" ";
    // cout<<root->right->data;
    // cout<<endl;

    return 1;

}

int pre(node* root)
{
    if(root)
    {
        cout<<root->data<<" ";
        pre(root->left);
        pre(root->right);

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

node2.data=21;
node2.left=&node4;
node2.right=&node5;

node3.data=2;
node3.left=NULL;
node3.right=NULL;


node4.data=1111;
node4.left=NULL;
node4.right=NULL;


node5.data=22222;
node5.left=NULL;
node5.right=NULL;


heapify(&node1);
pre(&node1);
return 0;
}