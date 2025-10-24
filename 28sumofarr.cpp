//sum of an array using recursion
#include<iostream>
using namespace std;
int sumofarr(int *arr, int n){
    if(n==0){
        return 0;
    } 

    int smallerarr=sumofarr(arr+1, n-1); //here arr[0] becomes the current array element when the arr+1, and size dec by 1
    int total=arr[0]+smallerarr;
    return total;
}
int main(){
    int arr[5]={1,3,4,5,6};
    int n=5;
    int result=sumofarr(arr,n);
    cout<<result;
    return 0;
}