#include<iostream>
#include<vector>
#include<string>

using namespace std;
int canSum(int targetSum, const vector<int>& nums){
    if(targetSum == 0) return true;
    if(targetSum < 0) return false;
    for(int x : nums){
        int remainder = targetSum - x;
        if(canSum(remainder, nums)) return true;
    }
    return false;
}
int main(){
    //vector<int> v = {2, 3};
    cout<<canSum(7,{8,3})<<endl;
    cout<<canSum(7,{5,3,4,7})<<endl;
    cout<<canSum(300,{7,14})<<endl;
    //canSum(7,{8,3}) -> false
    //canSum(7,{5,3,4,7}) -> true
    //canSum(300,{7,14}) -> ?
}
