#include<iostream>
#include<vector>
using namespace std;

int f(long long unsigned int index, const vector<int> &arr, vector<int> &subseq, int sum, int target) {
    if(index >= arr.size()){
        if(sum==target) {
            return 1;
        }
        return 0;
    }

    sum+=arr[index];
    subseq.push_back(arr[index]);
    int left=f(index+1, arr, subseq, sum, target);

    sum-=arr[index];
    subseq.pop_back();
    int right=f(index+1, arr, subseq, sum, target);

    return left+right;
}

int main(){
    vector<int> arr={3,1,2,3}, subseq;

    cout << f(0, arr, subseq, 0, 3);
}