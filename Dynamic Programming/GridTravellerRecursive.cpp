#include<iostream>
using namespace std;
int gridTraveller(int m, int n){
    if(m == 1 && n == 1) return 1;
    if(m == 0 || n == 0) return 0;
    return gridTraveller(m-1, n) + gridTraveller(m, n-1);
}
int main(){
    cout<<" "<< gridTraveller(18,18);
    //gridTraveller(2,3)=3
    //gridTraveller(18,18)=?
}
