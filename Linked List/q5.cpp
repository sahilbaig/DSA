#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};


int print_LL(Node* a)
{   
    while (a!=NULL)
    {
        cout<<a->data<<"   ";
        a=a->next;
    }
    
    return 1;
}

int main()
{ 
    Node* head = NULL; 
    Node* prev=NULL; 

    for(int i=0;i<10;i++)
    {
        Node* create =NULL;
        create= new Node();
        create->data=i;
        create->next=NULL;
        
        if(i==0)
        {
            head=create;
            prev=head;
            

        }
        else
        {
            prev->next=create;
            prev=create;
        }
        


    } 

    cout<<"Enter data to input ";
    int position;
    cin >> position;
    int count=0;

    Node* node1=head;
    Node* node2 = head;

    while (node1!=NULL)
    {   
        if(count==position)
        {
            node2=node2->next;
        }
        else
        {
            count++;
        }
        
        node1=node1->next;
    }
    

    print_LL(head);
    cout<<node2->data;

return 0;
}