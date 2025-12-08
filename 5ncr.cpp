//find ncr of a given number
#include<iostream>
using namespace std;

//find fact of a no.
int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;

    }
    return ans;
}

int ncr(int n, int r){
    int numerator=factorial(n);
    int denom = factorial(r) * factorial(n-r);

    int final= numerator / denom;

    return final;

}

int main(){
    int n;
    int r;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter r"<<endl;
    cin>>r;
    cout<<"the ncr of given n and r is"<<ncr(n,r);
    return 0;
}