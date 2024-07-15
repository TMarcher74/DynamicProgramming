#include<iostream>
using namespace std;

int f(int i) {
    if(i==0) return 0;
    return i + f(i-1);
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
}