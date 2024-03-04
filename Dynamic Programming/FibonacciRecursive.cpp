#include<iostream>
using namespace std;
int fib(int n){
    if(n <= 2) return 1;
    return fib(n-1) + fib(n-2);
}
int main(){
    cout<<"Fib of 4: "<< fib(8);
    //fib(8)=21
    //fib(50)=?
}
