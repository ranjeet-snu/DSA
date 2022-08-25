#include <iostream>
#include <climits>
using namespace std;

int LinearSearch(int arr[],int n,int f)
{
   for ( int i=0;i<n;i++)
   {
       if (arr[i]==f)
          { return i;}
        
    
   }
   return -1;
       
    
}
int main() 
{  int n;
   cout<<"Enter array Size:";
   cin>>n;
   
   int arr[n];
   for ( int i=0;i<n;i++)
   {
       cout<<"Enter Elemenet for index ["<<i<<"] :";
       cin>>arr[i];
   }
   int f;
   cout<<"Enter no to find:";
   cin>>f;
  cout<<"Found at Index:" <<LinearSearch(arr,n,f);
    



   return 0;
}
