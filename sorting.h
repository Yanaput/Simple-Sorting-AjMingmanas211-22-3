#include <iomanip>
#include <iostream>
using namespace std;

inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
}

inline void display(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i];
  }
  cout<<"\n";
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi,count = 0; 
	for (i = 0; i < length - 1; i++) 
	{ 
    mi = i;
    for(int j = i + 1; j < length; j++){
      if(data[j] < data[mi]){
        mi = j;
        count ++;
      }
    }
    swap(data[mi], data[i]);
    cout<<"\n";
    display(data,length);
	} 
  cout<<"count "<<count;
} 


void insertion(int a[],int n){
 int i,j;
  int new_number= 2;
  int temp,count=0;
  for(int i = 1; i < n; i++){
    temp = a[i];
    j = i - 1;
      while(temp < a[j] && j >= 0){
        a[j+1] = a[j];
        j--;
        count ++;
      }
    a[j+1] = temp;
  }
  display(a,n);
  cout<<"count "<<count;
}

void bubbleSort(int a[],int n){
int i,j,count=0;
int sorted;
for(j = 0; j < n-1; j++){
  sorted = 0;
  for(i = 0; i < n-j- 1; i++){
    if(a[i] > a[i+1]){
      swap(a[i], a[i+1]);
      count ++;
      sorted = 1;
    }
  }
  display(a,n);
  if(sorted == 0)
      break;
      cout<<"\n";
      display(a,n);
 }
  cout<<"count "<<count;
}