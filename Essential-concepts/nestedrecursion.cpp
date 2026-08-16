#include <iostream>
using namespace std;


int fun(int n){
    if(n>100)
        return n-10;
     else 
       return fun(fun(n+11));   
    
}

//using recursion
int sumofnatural(int n){
    if(n==0){
        return 0;
    }else{
       return sumofnatural(n-1) + n;
    }
}

///using loop
int sumtloop(int n){
    int x=0;
    while(n>0){
        x +=n--;   
    }
    return x;
}
int sum3(int n){
    return n * sum3(n+1)/2;
}

//factorial 
int factorial(int n){
    if(n==1){
        return 1;
    }else
    return factorial(n-1) * n;
}
//power using recursion
int pow(int a ,int b){
    if(b==0)
     return 1;
     else 
     return pow(a,b-1) * a;
}
//when done through iteration
///using loop
int powtiter(int a ,int b){
    //2 2 = 4 4 2 = 8 8 2 = 16 16 2 =32 32 
    int res=2;
    while(b>1){
        res *=a;
        b--;
    }
    return res;
}
// sum(n) = 1+2+3+.....sum(n-1) +n 
//fact(n-1)*n = 1*2*2*.....fact(n-1)*n
//pow(x,n)=x*x*x*.....pow(x,n-1) *x



int main(){
    int res = powtiter(2,8);
    cout<<"result if base is 2 and power is 8 : "<<res;
    // int x = 95;
    // cout<<"result is : " <<fun(x);
    // cout<<"\n finally function main function ends here";
    // cout<<"sum of : "<<x<<"is ="<<sumofnatural(x);
    // cout<<"sum of (1-5) is ="<<sumtloop(5);
    //factorial of 5
    // int x =factorial(5);
    // cout<<"factorial of 5! is : "<<x;

    return 0;
}

