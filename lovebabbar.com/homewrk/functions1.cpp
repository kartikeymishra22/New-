#include<iostream>
using namespace std;
int main (){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int ans = 1;
    for ( int i =1; i<=b; i++){
        ans = ans *a;
    }
    cout<<ans<<endl;
    return 0;
}