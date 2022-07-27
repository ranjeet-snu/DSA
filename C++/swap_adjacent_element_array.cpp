#include <iostream>
using namespace std;

void swapadjacent(int arr[],int n)
{
    for( int i=0; i<n;i+=2)
    {if(i+1<n)
    { swap(arr[i],arr[i+1]);}
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
    swapadjacent(arr,size);
    //reverse(arr,size) ; 
    display(arr,size);
    
    
    
    return 0;
}
