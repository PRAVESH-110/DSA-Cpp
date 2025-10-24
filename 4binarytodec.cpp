//for decimal to binary use mod and increment operator and for binary to decimal use & / ~ 
// and binary to decimal, we use left/ right shift operator

//convert binary to decimal
#include<iostream>
#include<math.h>
using namespace std;

int binarytodec(int n){
    int power=0;
    int ans=0;
    while(n!=0){
        int digit=n%10;
        if (digit==1){
            ans=ans+pow(2,power);
        }
        else{
        }
        n=n/10;
        power++;
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    cout<<binarytodec(n)<<endl;
    return 0;
}