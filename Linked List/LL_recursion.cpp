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

int recursion(Node* a)
{
     if(a->next==NULL)
     {
         cout<<a->data;
         return 1;

     }

     else
     {
         cout<<a->data;
         a=a->next;
         recursion(a);
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
    recursion(head);

return 0;

}