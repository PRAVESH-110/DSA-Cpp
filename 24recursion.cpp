#include<iostream>
using namespace std;
int pow(int n){
    if(n==0){
        return 1;
    }
    int small=pow(n-1); // ans= 2 * 2^2....
    int big=2*small;

}
int main(){
    int n;
    cin>>n;
    int ans=pow(n);
    cout<<ans;
    return 0;

}