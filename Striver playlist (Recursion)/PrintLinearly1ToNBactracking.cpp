#include<iostream>
using namespace std;

void f(int i, int n){
    if(i<1) return;    //Base condition

    f(i-1, n);
    cout << i << endl;  //Backtracking
}

int main(){
    int n;
    cin >> n;
    f(n,n);
}