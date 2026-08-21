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
        for(i=index;i<arr->length-1;i++)
        arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;

}


int BinarySearch(struct Array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
           return mid;
        else if(key<arr.A[mid])
         h=mid-1;
         else
         l=mid+1;   
    }
    return -1;

}
 

int RBinSearch(int a[],int l ,int h ,int key){
    int mid;
    if(l<=h){
        mid=(l+h)/2;
        if(key==a[mid])
        return mid;
        else if(key<a[mid])
        return RBinSearch(a,l,mid-1,key);
        else
        return RBinSearch(a,mid+1,h,key);

    }
}


int Get(struct Array arr,int index){
 if(index>=0 && index<arr.length)
    return arr.A[index];
}


void Set(struct Array arr,int index ,int x){
 if(index>=0 && index<arr.length)
    arr.A[index] = x;
}

int  Max(struct Array arr){
    int MAX = arr.A[0],i;
    for(i=1;i<arr.length;i++)
    if(arr.A[i]>MAX)  MAX = arr.A[i];
    return MAX;
}

int  Min(struct Array arr){
    int MIN = arr.A[0],i;
    for(i=1;i<arr.length;i++)
    if(arr.A[i]<MIN)  MIN = arr.A[i];
    return MIN;
}

int Sum(struct Array arr){
    int sum = 0,i;
    for(i=0;i<arr.length;i++){
           sum +=arr.A[i];
    }
    return sum;
}
int Avg(struct Array arr){
    int total = 0,i;
    for(i=0;i<arr.length;i++){
           total +=arr.A[i];
    }
    return total/arr.length;
}


void Reverse(struct Array *arr){
    int i,j;
    int B[arr->length];
    for(i=arr->length-1,j=0;i>=0;j++,i--){
       B[j] = arr->A[i];
    }
    for(i=0;i<=arr->length-1;i++)
     arr->A[i]=B[i];
}

void Reverse1(struct Array *arr){
    int temp;
    for(int i=0,j=arr->length-1;i<j;i++,j--){
      temp = arr->A[i];
      arr->A[i] = arr->A[j];
      arr->A[j] = temp;
    }
}

void shiftleft(struct Array *arr){
     int i;
     arr->A[0]=0;
     for(i=0;i<arr->length;i++)
      arr->A[i]=arr->A[i+1];
}

int main(){
   struct Array arr ={{1,2,3,4,5},20,5};
   Reverse1(&arr);
   Display(arr);
    return 0;
}