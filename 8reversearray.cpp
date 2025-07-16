///reverse an array
#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        swap(arr[start],arr[end]);//here if wed assigned, then only the start value changed, but we want to swap both the values
        start++;
        end--;
    }
}

void printArry(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    printArry(arr,n);

    return 0;
}