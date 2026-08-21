#include <iostream>
using namespace std;


struct Array{
    int A[10];
    int length;
    int size;
};


void display(struct Array arr){
  int i;
  cout<<"\n Elements are \n";
  for(i=0;i<arr.length;i++)
   cout<<"index : "<<i<<" element : "<<arr.A[i]<<endl;
}


struct Array* Merge(struct Array *arr1,struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 =new Array();
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
          arr3->A[k++] = arr1->A[i++];
        else
          arr3->A[k++]=arr2->A[j++];
    }
   

    for(;i<arr1->length;i++)
     arr3->A[k++] = arr1->A[i];
    for(;j<arr2->length;j++)
     arr3->A[k++] = arr2->A[j];
     arr3->size=10;

     return arr3;
}


int main(){
   struct Array arr1={{2,9,21,29,34},5,10};
   struct Array arr2={{2,3,16,18,29},5,10};
   struct Array *arr3;
    arr3 = Merge(&arr1,&arr2);
    display(*arr3);
    return 0;
}