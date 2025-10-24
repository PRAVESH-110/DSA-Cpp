//using recursion, find b to the power of a
#include<iostream>
using namespace std;
int powerofb(int a,int b){
    if (b==0) {
        return 1;
    }
    if(b==1){
        return a;
    }
    //rec call
    int ans= powerofb(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int res= powerofb(a,b);
    cout<<res;
    return 0;
}