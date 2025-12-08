//check if a number is prime or not
#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1) return false;
   for(int i=2;i<n;i++){
    if(n%i==0){
        return false;
    }
   }
   return true;
}

int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    if (isPrime(n)) {
        cout<<"is a prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}