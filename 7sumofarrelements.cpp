//to find the sum of all elements of an array
#include<iostream>
using namespace std;
int main(){
    int num[100];
    int size;
    cout<<"enter size of array";
    cin>>size;
    int sum= 0;
    
    for(int i=0;i<size;i++){
        cout<<"enter array elements";
        cin>>num[i];
        sum= sum +num[i];
    }
    cout<<"the sum of array elements are"<<sum;

    return 0;
}