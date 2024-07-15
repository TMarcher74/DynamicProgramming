#include<iostream>
#include<vector>
using namespace std;

void f(vector<int> *arr, int left, int right) {
    if(left>=right) return;
    swap((*arr)[left], (*arr)[right]);
    f(arr,left+1,right-1);
}

int main() {
    vector<int> arr={1,2,3,4,5};

    f(&arr, 0, arr.size()-1);

    for(int x: arr) {
        cout << x;
    }
}