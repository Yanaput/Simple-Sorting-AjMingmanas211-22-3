#include <iostream>
#include <iomanip>
using namespace std;
#include "sorting.h"

int main(int argc,char **argv) {
  int i, N = argc-1; 
  int *a = new int[N];
  for(i=1;i<argc;i++)
    a[i-1]=atoi(argv[i]);
  cout<<"using insertion Input"<<"\n";
  display(a, N);
  cout<<"\n";
  insertion(a, N);
  cout<<"\n"<<"final result"<<"\n";
  display(a, N);
}
