#include <iostream>
using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};


void display(struct Array arr){
  int i;
  cout<<"\n Elements are \n";
  for(i=0;i<arr.length;i++)
   cout<<"index : "<<i<<" element : "<<arr.A[i]<<endl;
}

int Missing_Element(struct Array arr){
    int i,sum=0;
    int total=arr.A[arr.length-1];
    for(i=0;i<arr.length;i++)
        sum+=arr.A[i];
     total = total * (total + 1)/2;
     return total - sum ;
}


//second method
int Missing_Element1(struct Array arr){
    int i,diff=arr.length-0;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]-i!=diff)
        return i+diff;
    }

}

void Missing_Element2(struct Array arr){
    int i,diff=arr.length-0;
    for(i=0;i<arr.length;i++){
        if(arr.A[i]-i!=diff){
            while(diff<arr.A[i]-1){
                cout<<"The difference is : "<<i+diff<<endl;
                diff++;
            }
        }
    }

}


int main(){
   struct Array arr={{1,2,3,4,5,6,8,9,10,11,12},20,11};
   cout<<"The missing element in the array  are : "<<Missing_Element(arr);
    return 0;
}