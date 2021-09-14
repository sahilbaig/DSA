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

int insertion(int data , Node* a )

{   
     while (a!=NULL)
    {  
        

       if(a->data==2)
       {    

           Node* next_store;
           next_store=a->next;
           
           Node* create= new Node();
           create->data=99;
           create->next=next_store;

           a->next=create;

       }

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
    int data;
    cin>>data;
    int position;
    cin >> position;

    // print_LL(head);
    // insertion(data,head);

    //Going for removing first el
    print_LL(head);

return 0;
}