//find unique elemt in an array and print it (print the find function)

//brute force approach- use loop to check each element in the array is unique or not

//most optimal approach using bitwise opertor (XOR- anything XOR weiht itself cancels out , so only unique elements remain)
#include<iostream>
using namespace std;
int findUnique(int arr[], int size){
    int unique = 0;
    for(int i=0;i<size;i++){
        unique = unique ^ arr[i];
        return unique;
    }
}
int main(){
    int even[7]= {12,4,12,52,52,64,43};
    cout<<"unique elements are"<<findUnique(even,7);
    return 0;

}