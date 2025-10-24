//check if a number is prime or not
#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n;i++){
        if(n%i==0){
            return 0; //0 for not prime
        }
        return 1; //1 is for prime
    }
}

int main(){

    int n;
    cin>>n;

    if (isPrime(n)) {
        cout<<"is a prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}