#include<iostream>
#include<vector>
using namespace std;

void f(long long unsigned int index, const vector<int> &arr, vector<int> &subseq) {
    if(index >= arr.size()){
        for(auto x: subseq) cout << x <<" ";
        cout << "\n";
        return;
    }
    subseq.push_back(arr[index]);
    f(index+1, arr, subseq);
    subseq.pop_back();
    f(index+1, arr, subseq);
}

int main(){
    vector<int> arr={3,1,2}, subseq;

    f(0, arr, subseq);
}