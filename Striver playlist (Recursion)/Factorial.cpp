#include<iostream>
using namespace std;

int f(int i) {
    if(i==1) return 1;
    return i * f(i-1);
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
}