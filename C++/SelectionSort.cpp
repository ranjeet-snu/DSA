// Selection Sort -- compare first element with another number in array and if smaller than swap it


#include <iostream>
#include <climits>
using namespace std;

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
   
   for (int i=0;i<n-1;i++)             # it is cpmapare number first till index-1
      for (int j=i+1;j<n;j++)          # it is for last index to be copmpared
      { if (arr[j]<arr[i])
      { int temp=arr[j];
           arr[j]=arr[i];
           arr[i]=temp;
      }
      }
      
    for ( int i=0;i<n;i++)
   {
       cout<<" Elemenet for index ["<<i<<"] :"<<arr[i]<<endl;
       
   }
   
   
   
   return 0;
}
