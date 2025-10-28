//factorial of a number using recursion
#include<iostream>
using namespace std;
int factorial(int n){

    //base case (when to stop)
    if(n==0){
        return 1;
    }
    int smallfun= factorial(n-1);
    int bigfun= n*smallfun;

    return bigfun;
}
int main(){
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans;
    return 0;
}
