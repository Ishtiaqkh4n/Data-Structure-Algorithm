#include <iostream>
#include <stdio.h>
using namespace std;


/*

//array operations
//inserting in an array


int main(){
    int index=3;
    int arr[4]={1,2,3};
    arr[index]= 32;

    cout<<"element inserted at : "<<arr[index];


    return 0;
}
*/



struct Array{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    printf("\nElements are \n");
    for(i=0;i<arr.length;i++){
        printf("%d \n",arr.A[i]);
    }
}

void append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr,int index,int x){
    int i;
    if(index>=0 && index<=arr->length){
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
            arr->A[index] = x;
            arr->length++;
        }
}

int  deletee(struct Array *arr,int index){
    int i,x=0;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(i=0;i<arr->length-1;i++)
        arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;

}
int main(){
   struct Array arr = {{2,3,4,5,6},20,6};
   deletee(&arr,4);
   Display(arr);
    return 0;
}