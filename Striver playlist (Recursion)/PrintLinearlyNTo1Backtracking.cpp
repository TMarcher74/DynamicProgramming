#include<iostream>
using namespace std;

void f(int i, int n){
    if(i>n) return;    //Base condition

    f(i+1, n);
    cout << i << endl;  //Backtracking
}

int main(){
    int n;
    cin >> n;
    f(1,n);
}