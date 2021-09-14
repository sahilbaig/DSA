#include <bits/stdc++.h>
using namespace std;

int swap(int &a, int &b)
{   
    cout<<"swap called"<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;    

}

int max_heapify(vector <int> &arr, int i)
{
    // find max of values and replace it with root value;;
   int root=arr[i];
   int left_child=arr[2*i+1];
   int right_child=arr[2*i+2];

    cout<<"left"<<2*i+1<<"  "<<"right"<<2*i+2<<endl;
    if(left_child>root && left_child>right_child)
    {
        swap(arr[i],arr[2*i+1]);     

        // check if left and right exists for swapped root node;
        int left_child_index=2*i+1;
        if(2*left_child_index+1<=arr.size() && 2*left_child_index+2<=arr.size())
        {
            max_heapify(arr,2*i+1);    
        }

        
        // check if  2*i +1 LESS then size
        
    }
    else if  (right_child>root && right_child>left_child)
    {
        swap(arr[i],arr[2*i + 2]);      

        int right_child_index=2*i+2;
        if(2*right_child_index+1<=arr.size() || 2*right_child_index+2<=arr.size())
        {   
            if(2*right_child_index+1<=arr.size())
            {
                max_heapify(arr,2*i+1);
            }
            
                
        }
    }

}
int build_heap(vector <int> &arr)
{   
    for(int i=arr.size()/2-1 ;i>=0;i--)
    {
        max_heapify(arr,i);
        
    }
    return 1;
}
int main()
{

vector <int> arr={9,6,8,2,1,4,3};
int a=build_heap(arr);

for(int i=0;i<arr.size();i++)
{
    cout<<arr[i]<<"  ";
}
return 0;
}