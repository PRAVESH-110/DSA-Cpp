//finding the pivot element for the  time complexity (log N)
//pivot is the smallest element (here its the pivot)
#include<iostream>
using namespace std;

int pivotSearch(int arr[], int n){
    // int s=0;
    // int e=n-1;
    // int mid=s+(e-s)/2;
    // while(s<e){
        
    //     if(arr[mid]>arr[0]){
    //         s=mid+1;
    //     }
    //     else{
    //         e=mid; //because if we do end-1, then we'll miss out the mid element (and  it might be the pivot)
    //     }
    //     mid=s+(e-s)/2;
    // }
    // return s; //here were return s as starting elemnt (of either branch) is the smallest and is pivot

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>arr[s]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
}
int main(){
    int arr[]={8,10,17,1,3};
    pivotSearch(arr,5);
    cout<<"the pivot element is found at"<<pivotSearch(arr,5);
}