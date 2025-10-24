//check if an array is sorted or unsorted
#include<iostream>
using namespace std;
bool sortarray(int *arr, int n){
    if(n==0){
        return true;
    }
    if(n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingpart=sortarray(arr+1, n-1);
        return remainingpart;
    }

    // if(n==0) return true;
    // if(n==1) return true;

    // if(arr[n]>arr[n-1]){
    //     return true;
    // }
}
int main(){
    int arr[5]={2,4,6,10,9};
    int n=5;
    bool ans=sortarray(arr,n);

    if(ans){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Unsorted"<<endl;
    }

    return 0;
}