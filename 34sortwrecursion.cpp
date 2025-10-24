#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n){
    if(n==0 || n==1){
        return ;
    }  

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr, n-1);
}

void selectionSort(int *arr, int n, int index=0){
    if(index == n-1) return;

    int minIndex=index;
    for(int i=0;i<n;i++){
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
    }

    if(minIndex!= index){
        swap(arr[minIndex],arr[index]);
    }

    selectionSort(arr,n, index+1);
}

//now write for the quick sort



int main(){
    int arr[5]={2,3,1,5,4};
    // sortArray(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}