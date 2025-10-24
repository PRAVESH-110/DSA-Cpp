#include<iostream>
using namespace std;
void print(int arr[], int s, int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<endl;
    }cout<<endl;
}
bool binarysearch(int *arr, int s, int e, int key){
  
    
    if(s>e){
        return false;
    }

    int mid=s+(e-s)/2;

    if(arr[mid]==key){
        return true;
    }

    if(arr[mid] > key){
        return binarysearch(arr, s, mid-1, key);
    }
    else{
        return binarysearch(arr, mid+1, e, key);
    }

}
int main(){
    int arr[7]={1,3,4,5,6,8,9};
    int n=7;
    int key=6;
    int res=binarysearch(arr,0,6,key);
    if(res){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;

    }

    return 0;
}