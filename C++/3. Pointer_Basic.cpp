#include <iostream>
#include <climits>
using namespace std;

int main() 
{ int n;
  n=8;
  int *n_ptr;
  n_ptr=&n;
  cout<<"value of n: "<<n<<endl;
  cout<<"value of n with *n_ptr: "<<*n_ptr<<endl;           // pointer can access value too
  
  cout<<"Address of n: "<<&n<<endl;
  cout<<"Address of n with n_ptr: "<<n_ptr<<endl;
 
  *n_ptr=16;
   cout<<"N is changed from the pointer: "<<n<<endl;          //pointer can modify value too
   
 
 return 0;
 
}
