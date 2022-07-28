#include <iostream>
#include <climits>
using namespace std;

int main() 
{ int n;
  n=8;
  int *n_ptr;                                             // Pointer --- used for store address of variable of same type;
                                                         // Pointers always takes 8 byte;
  n_ptr=&n;
  cout<<"value of n: "<<n<<endl;
  cout<<"value of n with *n_ptr: "<<*n_ptr<<endl;           // *ptr become exactly same as n , as it has same address 
  
  cout<<"Address of n: "<<&n<<endl;
  cout<<"Address of n with n_ptr: "<<n_ptr<<endl;
 
  *n_ptr=16;
   cout<<"N is changed from the pointer: "<<n<<endl;          //pointer can modify value too
   
 
 return 0;
 
}
