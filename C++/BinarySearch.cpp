#include <iostream>
#include <climits>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
   int s=0;
   int e=n;
   
   while (s<=e)
   { int mid=(s+e)/2;
     if (key==arr[mid])
        { return mid; }
        
    else if( key<arr[mid])
    {  e= mid-1;}
    else
    { s= mid+1;}
   
   }
   return -1;
}
int main() 
{ int n;
   cout<<"Enter array Size:";
   cin>>n;
   
   int arr[n];
   for ( int i=0;i<n;i++)
   {
       cout<<"Enter Elemenet for index ["<<i<<"] :";
       cin>>arr[i];
   }
   int key;
   cout<<"Enter Key to be searched: ";
   cin>>key;
   
   cout<<BinarySearch(arr,n,key);
   
   
   



   return 0;
}
