#include <iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

void duplicate(struct Array arr){
  int lastdup =0;
  int i;
  for(i=0;i<arr.length;i++){
    if(arr.A[i]==arr.A[i+1] && arr.A[i]!=lastdup){
        cout<<"duplicate is : "<<arr.A[i]<<endl;
        lastdup = arr.A[i];
    }
  }
}

int main(){
   struct Array arr={{3,6,7,7,10,13,25,25,25,20},20,10};
    return 0;
}