//for decimal to binary use mod and increment operator and for binary to decimal use & / ~ 
// and right/ left shift operator
#include<iostream>
#include<math.h>
using namespace std;

int binarytodec(int n){
    int i=0;
    int digit=0;
    while(n!=0){
        int ans=n%10;
        if(ans==1){
            digit=digit+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<digit<<endl;

}

int decimaltobin(int n){
    //using advanced methods- using recursion etc
}
int main(){
    int n;
    cin>>n;
    binarytodec(n);
}