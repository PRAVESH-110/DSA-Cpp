///reverse an array
#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start=0;
    int end= n-1;
    while(start<=end){
        swap(start,end);
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
    int arr[6]= {1,2,4,5,6,3};
    int arr[5]= {1,2,4,5,6};

    reverse(arr,6);
    reverse(arr,5);

    printArray(arr, 6);
    printArray(arr, 5);

    return 0;
}