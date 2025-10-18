#include<iostream>
using namespace std;
int main()
{
  int length = 0;
  int  *Arr = NULL;

  cout<<"enter the number of elements:\n";
  cin>>length;
  //step 1: Allocate the memory

  Arr = new int [length];

  if (Arr == NULL)
  {
    cout<<"Unable to allocate memory..\n";
  }
  else 
  {
    cout<<"Memory gets alloacted...\n";
  }
//step 2:Use the memory

//Step 3:Reallocate the memory
delete [] Arr;

return 0;
}