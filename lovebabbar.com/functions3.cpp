#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact = fact *i;
    }
    return fact;
}
int nCr(int n , int r){
    int neum = fact(n);
    int denom = fact(r)*fact(n-r);
    int ans = neum/denom;
    return ans;
}
int main(){
    int n , r;
    cin>>n>>r;
    cout<<"Answer is "<< nCr(n,r) <<endl;
    return 0;
}