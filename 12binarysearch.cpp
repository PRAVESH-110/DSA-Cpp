//find index of element using the binary search technique
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key ){
    // int start =0;
    // int end=size-1;
    // int mid=(start+end)/2;

    // while(start<=end){ //this is not for the calue inside indexes but index value (0 to n)

    //     if(arr[mid]==key){
    //         return mid;
    //     }
    //     if(arr[mid]> key){
    //         end=mid-1;
    //     }
    //     else{ 
    //         start=mid+1;
    //     }
    //     mid=(start+end)/2;
    // }
    // return -1;

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout<< mid;
}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int index=binarySearch(even,6,12);
    cout<<"index of 12 is"<<index<<endl;
    return 0;
}