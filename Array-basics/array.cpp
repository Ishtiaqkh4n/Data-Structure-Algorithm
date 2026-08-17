#include <iostream>
using namespace std;


int main()
{  /*
     //create an array of pointer of  size 3
    //then store the 3 array created at heap 
    int *arr[3];
    arr[0]=new int[4]{1,2,3,4};
    arr[1]=new int[4]{5,6,7,8};
    arr[2]=new int[4]{9,99,22,44};

    cout<<"Arr value at heap  is : "<<arr[1][3];
    */
   
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



return 0;
}