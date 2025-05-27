#include<iostream>
using namespace std;

//find fact of a no.
int factorial(int n){

    int fact=1;

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n, int r){
    int numerator=factorial(n);
    int denom = factorial(r) * factorial(n-r);

    int final= numerator / denom;

    return 0;

}

int main(){
    cout<<"the ncr of given n and r is"<<ncr(7,5);
    return 0;
}