#include <bits/stdc++.h>
using namespace std;
using namespace std;
struct Node
{
    int data;
    Node* prev;
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

Node* get_last(Node* a)
{   
    while (a->next!=NULL)
    {
        a=a->next;
    }
    
    return a;
}

int print_reverse(Node* a)
{

while (a!=NULL)
    {   
        cout<<a->data;
        a=a->prev;
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
        create->prev=prev;
        
        if(i==0)
        {
            head=create;    
            prev=head;
            

        }
        else
        {
            prev->next=create;
            create->prev=prev;
            prev=create;

        }
        


    } 

     print_LL(head);

    Node* last_node = get_last(head);
    cout<<endl<<last_node->data;

    print_reverse(last_node);


    return 1;
}