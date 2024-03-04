#include<iostream>
#include<map>
#include<string>

using namespace std;
double gridTraveller(int m, int n, map<string, double>& mem){
    string key=to_string(m)+','+to_string(n);
    if(mem.count(key) == 1) return mem[key];
    if(m == 1 && n == 1) return 1;
    if(m == 0 || n == 0) return 0;
    mem[key] = gridTraveller(m-1, n, mem) + gridTraveller(m, n-1, mem);
    return mem[key];
}
int main(){
    map<string, double> mem;
    cout<<"18x18 grid: "<< to_string(gridTraveller(18,18, mem));
    //gridTraveller(2,3)=3
    //gridTraveller(18,18)=2333606220.000000
}
