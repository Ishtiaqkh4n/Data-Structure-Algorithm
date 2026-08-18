#include <iostream>
using namespace std;


/*
#include <iostream>

using namespace std;


struct Array{
    int *A;
    int length;
    int size;
};

void display(struct Array arr){
  int i;
  cout<<"\n Elements are \n";
  for(i=0;i<arr.length;i++)
   cout<<"index : "<<i<<" element : "<<arr.A[i]<<endl;
}
int main() {
    struct Array arr;
    int n,i;
    cout<<"Enter array size : ";
    cin>>arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout<<"/n Enter number of numbers : ";
    cin>>n;
    cout<<"Enter all elements : ";
    for(i=0;i<n;i++)
     cin>>arr.A[i];
     arr.length = n;
arr.length = n;
    arr.length = n;
     display(arr);
    return 0 arr.length = n;
     display(arr);
    return 0;
}

*/
/*
     //create an array of pointer of  size 3
    //then store the 3 array created at heap 
    int *arr[3];
    arr[0]=new int[4]{1,2,3,4};
    arr[1]=new int[4]{5,6,7,8};
    arr[2]=new int[4]{9,99,22,44};

    cout<<"Arr value at heap  is : "<<arr[1][3];
       //                                                        
   //inside the heap 3rdmethod
   
    int **A;
    A= new int*[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];
   
    //assign some values 
        for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
         A[i][j]=i+j*4;
        }
    }


    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
         cout<<"Arr value is : "<<A[i][j]<<endl;
        }
    }


void display(struct Array arr){
  int i;
  cout<<"\n Elements are \n";
  for(i=0;i<arr.length;i++)
   cout<<"index : "<<i<<" element : "<<arr.A[i]<<endl;
}
void Append(struct Array *arr,int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void Insert(struct Array *arr,int index,int x){
    int i;
    if(index>=0 && index<=arr->length){
        for(i=arr->length;i>index;i--)
        arr->A[i] = arr->A[i-1];
        arr->A[index] = x;
        arr->length++;
    }
}
int deletee(struct Array *arr,int index){
    int x=0,i;
    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for(i=index;i<arr->length-1;i++)
        arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}
int main() {
    struct Array arr={{1,2,3,4,5},5,20};
     cout<<"deleted element is : "<<deletee(&arr,2);
     display(arr);
    return 0;
}
    */
/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
    /*
    Linear Search 
    struct Array{
    int A[20];
    int length;
    int size;
};

void display(struct Array arr){
  int i;
  cout<<"\n Elements are \n";
  for(i=0;i<arr.length;i++)
   cout<<"index : "<<i<<" element : "<<arr.A[i]<<endl;
}

int linearSearch(struct Array arr,int x){
    for(int i=0;i<arr.length-1;i++)
     if(arr.A[i]==x) return arr.A[i];
     return -1;
}


int main() {
    struct Array arr={{1,2,3,4,5},5,20};
     //check element 4 in a given array
     cout<<"Checking 4 in the array : "<<linearSearch(arr,4);
     display(arr);
    return 0;
}
    
    */
struct Array{
    int A[20];
    int length;
    int size;
};

void display(struct Array arr){
  int i;
  cout<<"\n Elements are \n";
  for(i=0;i<arr.length;i++)
   cout<<"index : "<<i<<" element : "<<arr.A[i]<<endl;
}
void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}
//transposition
int l_search_improved1(struct Array *arr,int x){
    for(int i=0;i<arr->length-1;i++)
     if(arr->A[i]==x){
        swap(&arr->A[i],&arr->A[i-1]); 
        return arr->A[i];
    }
     return -1;
}
//move to front if found 
int l_search_improved2(struct Array *arr,int x){
    for(int i=0;i<arr->length-1;i++)
     if(arr->A[i]==x){
        swap(&arr->A[i],&arr->A[0]); 
        return arr->A[i];
    }
     return -1;
}


int main() {
    struct Array arr={{1,2,3,4,5},5,20};
     //check element 4 in a given array
     cout<<"Checking 4 in the array : "<<l_search_improved1(&arr,4);
      cout<<"Checking 4 in the array : "<<l_search_improved2(&arr,4);
     display(arr);
    return 0;
}