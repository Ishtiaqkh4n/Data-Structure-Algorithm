#include <iostream>
using namespace std;

//prototypes
void fun1(int);
void funb(int);

 void fun1(int n){
    if(n>0){
        cout<<"n is : "<<n<<endl;
        funb(n-1);
    }
 }
  void funb(int n){
    if(n>0){
        cout<<"n is : "<<n<<endl;
        fun1(n/2);
    }
 }


int main(){
    int x=20;
    fun1(x);
    return 0;
}

