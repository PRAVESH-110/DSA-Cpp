//merge sort using recursion
#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid=(s+e)/2;

    int len1= mid-s+1;
    int len2= e-mid;

    int *first= new int [len1];
    int *second= new int [len2];

    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    int k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]= arr[k++];
    }

    delete []first; //free the heap memory
    delete []second;

}
void mergeSort(int *arr, int s, int e){
    if(s>e){
        return;
    }
    int mid=s+(e-s)/2;

    mergeSort(arr,s,mid);

    mergeSort(arr, mid+1, e);

    merge(arr, s,e);

}
int main(){
    int arr[5]={4,5,2,1,7};
    int n=5;
    mergeSort(arr,0,n-1);
    return 0;
}