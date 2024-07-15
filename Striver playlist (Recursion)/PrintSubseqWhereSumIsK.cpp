#include<iostream>
#include<vector>
using namespace std;

void f(long long unsigned int index, const vector<int> &arr, vector<int> &subseq, int sum, int target) {
    if(index >= arr.size()){
        if(sum==target) {
            for(auto x: subseq) cout << x <<" ";
            cout << "\n";
            return;
        }
        return;
    }

    sum+=arr[index];
    subseq.push_back(arr[index]);
    f(index+1, arr, subseq, sum, target);

    sum-=arr[index];
    subseq.pop_back();
    f(index+1, arr, subseq, sum, target);
}

int main(){
    vector<int> arr={3,1,2}, subseq;

    f(0, arr, subseq, 0, 3);
}