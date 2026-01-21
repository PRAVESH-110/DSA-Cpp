//sort 0s and 1s together
#include<iostream>
using namespace std;

//re code it
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}


void sortOne(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]==0){
        i++;
        }
        while(arr[j]==1){     
        j--;
        }
    if(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
    }
    }
    
}
int main(){
    int arr[9]={0,1,0,1,0,1,1,1,0};
    sortOne(arr, 9);
    printArray(arr,9);
    return 0;
}