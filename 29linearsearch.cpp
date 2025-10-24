//search an element using recursion
#include<iostream>
using namespace std;
bool search(int *arr, int key, int size){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
    bool remaining=search(arr+1,key,size-1);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key= 9;
    int size=5;
    int result=search(arr,9,5);
    if(result){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}