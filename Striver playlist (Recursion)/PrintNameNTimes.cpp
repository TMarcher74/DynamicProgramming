#include<iostream>
using namespace std;

void f(int i, int n){
    if(i>=n) return;    //Base condition

    cout << "Hello there!\n";
    f(i+1, n);
}

int main(){
    int n;
    cin >> n;
    f(0,n);
}