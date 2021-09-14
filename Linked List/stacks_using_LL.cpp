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

int pop_it(Node* a)
{
    while(a!=NULL)
    {
        if(a->next->next==NULL)
        {
            cout<<"founf";
            cout<<a->data;
            a->next=NULL;
        }

        a=a->next;
    }
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

    print_LL(head);

    //Removing elements

    pop_it(head);

    print_LL(head);

return 0;
}