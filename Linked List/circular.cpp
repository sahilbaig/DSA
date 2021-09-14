#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
int main()
{
 
node* head;
node* prev=NULL;

for(int i=0;i<5;i++)
{
    node* create= new node();
    create->next=head;
    if(i==0)
    {
        head=create;
        head->data=i;
        head->next=prev;
        prev=head;

    }
    else
    {
        create->data=i;
        prev->next=create;
        prev=create;

   }
    

}

node* start = head;

while(start->next!=head)
{
    cout<<start->data<<" ";
    start=start->next;
}
return 0;
}