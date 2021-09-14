#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
}a1,a2,a3,a4,a5,a6;

int main()
{

a1.data=1;
a1.next= &a2;
// cout<<a1.data<<a1.next;

a2.data=2;
a2.next=&a3;

a3.data=3;
a3.next=&a2;

a4.data=4;
a4.next=&a3;

a5.data=5;
a5.next=&a4;

a6.data=6;
a3.next=&a3;


Node* head= &a1;
Node* slow_ptr=head;
Node* fast_ptr=head->next;
while(head!=NULL)
{
    if(slow_ptr==fast_ptr)
    {   
        cout<<slow_ptr->data<<" "<<fast_ptr->data<<"  ";
        break;
    }

    slow_ptr=slow_ptr->next;
    fast_ptr=fast_ptr->next->next;

    head=head->next;


}

 
return 0;
}