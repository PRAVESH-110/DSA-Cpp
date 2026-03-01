//find unique elemt in an array and print it (print the find function)

//brute force approach- use loop to check each element in the array is unique or not

//most optimal approach using bitwise opertor (XOR- anything XOR weiht itself cancels out , so applicable when sorted and)
#include<iostream>
#include <vector>
using namespace std;

// cant use this as only applicable if ans b/w 0 and 256
int findUnique(int arr[], int size){
    int unique = 0;
    for(int i=0;i<size;i++){
        unique = unique ^ arr[i];
    }
    return unique;
}

// {
//     int freq[256] = {0};

//     for(int i = 0; i < size; i++) {
//         freq[arr[i]]++;
//     }

//     for(int i = 0; i < size; i++) {
//         if(freq[arr[i]] == 1) {
//             return arr[i];
//         }
//     }

//     return -1;
// }
//another brute forcce approach using two loops

    // vector<int> ans;
    // for(int i=0;i<size;i++){
    //     bool isuniq= true;
    //     for(int j=i+1;j<size;j++){
    //         if( i!==j && arr[i]==arr[j]){
    //             isuniq= false;
    //              break;
    //         }
    //          if(isUnique) {
            //ans.push_back(arr[i]);
        //}
    //     }
    // }
int main(){
    int even[7]= {12,4,12,52,52,64,43};
    cout<<"unique elements are"<<findUnique(even,7);
    return 0;

}

  