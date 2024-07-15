#include<iostream>
#include<vector>
using namespace std;

bool f(long long unsigned int index, const vector<int> &arr, vector<int> &subseq, int sum, int target) {
    if(index >= arr.size()){
        if(sum==target) {
            for(auto x: subseq) cout << x <<" ";
            cout << "\n";
            return true;
        }
        return false;
    }

    sum+=arr[index];
    subseq.push_back(arr[index]);
    if(f(index+1, arr, subseq, sum, target)) return true;

    sum-=arr[index];
    subseq.pop_back();
    if(f(index+1, arr, subseq, sum, target)) return true;
    return false;
}

int main(){
    vector<int> arr={3,1,2}, subseq;

    f(0, arr, subseq, 0, 3);
}