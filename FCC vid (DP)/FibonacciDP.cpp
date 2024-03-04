#include<iostream>
#include<map>
#include<string>

using namespace std;

double fib(int n, map<int, double>& mp){ //Pass by ref
    if(mp.count(n)==1) return mp[n];
    if(n <= 2) return 1;
    mp[n]= fib(n-1, mp) + fib(n-2, mp);
    return mp[n];
}
int main(){
    map<int, double> mp;
    cout<<"Fib of 8: "<< to_string(fib(50, mp));
    //fib(8)=21
    //fib(50)=12586269025.000000
}
