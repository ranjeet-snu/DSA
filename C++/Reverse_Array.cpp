#include <iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    { swap(arr[start],arr[end]);
      start++;
      end--;
    }
    
    
}

void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    
    int size;
    cout<<"Enter array size:";
    cin>>size;
    int arr[size];
    
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    display(arr,size);
    reverse(arr,size) ; 
    display(arr,size);
    
    
    
    return 0;
}
