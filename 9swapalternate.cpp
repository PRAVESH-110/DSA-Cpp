//swap alternate elements of an array
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}
void swapAlternate( int arr[], int size){
    for(int i=0;i<size-1;i+=2){
            swap(arr[i], arr[i+1]);
    }
}
int main(){
    int even[8]= {2,3,4,5,6,7,8,9};
    int odd[5]= {2,6,7,8,9};
    
    swapAlternate(even, 8);
    printArray(even, 8);

    swapAlternate(even, 5);
    printArray(even, 5);
    return 0;
}