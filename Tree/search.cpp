#include <bits/stdc++.h>
using namespace std;
struct  node
{
    int data;
    node* left;
    node* right;
};



int search(node* cn)
{   
    if(cn==NULL)
    {
        return 1 ;
    }
    if(cn->data==1)
    {
        cout<<"Found";
        return 1;

    }
    search(cn->left);
    search(cn->right);

    return 1;
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
node3.left=&node6;
node3.right=&node7;


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


search( &node1 );
return 0;
}