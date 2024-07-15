#include<iostream>
#include<vector>
using namespace std;

bool f(vector<char> arr, int i, int n) {
    if(i>=n/2) return true;
    if(arr[i] != arr[n-i-1]) return false;
    return f(arr, i+1, n);
}

int main() {
    vector<char> arr={'M', 'A', 'D', 'A', 'M'};

    cout << f(arr, 0, arr.size());

}