#include<iostream>
#include<vector>
#include<string>
#include<map>

using namespace std;
int canSum(int targetSum, const vector<int>& nums, map<int, bool>& mem){
    if(mem.count(targetSum) == 1) return mem[targetSum];
    if(targetSum == 0) return true;
    if(targetSum < 0) return false;
    for(int x : nums){
        int remainder = targetSum - x;
        if(canSum(remainder, nums, mem)){
            mem[targetSum] = true;
            return true;
        }
    }
    mem[targetSum] = false;
    return false;
}
int main(){
    //vector<int> v = {2, 3};
    map<int, bool> mem1;
    map<int, bool> mem2;
    map<int, bool> mem3;

    cout<<canSum(7, {8,3}, mem1)<<endl;
    cout<<canSum(7, {5,3,4,7}, mem2)<<endl;
    cout<<canSum(300, {7,14}, mem3)<<endl;
    //canSum(7,{8,3}) -> false
    //canSum(7,{5,3,4,7}) -> true
    //canSum(300,{7,14}) -> false
}
