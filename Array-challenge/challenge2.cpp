#include <iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

int  Max(struct Array arr){
    int MAX = arr.A[0],i;
    for(i=1;i<arr.length;i++)
    if(arr.A[i]>MAX)  MAX = arr.A[i];
    return MAX;
}

void Multiple_Missing_Elements(struct Array arr){
    int i;
    int max=Max(arr);
    struct Array *arr2 = new Array();
     arr2->size = max;
     arr2->A[max] = {0};
    for(i=0;i<arr.length;i++) 
     arr2->A[arr.A[i]] = 1;

    while(i<arr2->length){
      if(arr2->A[i]==0)cout<<"The missing element is : "<<arr2->A[i]<<endl;    
    }
}



int main(){
   struct Array arr={{1,2,3,4,5,6,8,9,10,11,12},20,11};
  
    return 0;
}