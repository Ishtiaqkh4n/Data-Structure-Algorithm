#include <iostream>
using namespace std;

int x=0;

int fun(int n){
    if(n>0){
        x++;
        return fun(n-1) + x;

    }

    return 0;
}

int main(){
    int r=5;
    int sum=fun(r);
    return 0;
}

