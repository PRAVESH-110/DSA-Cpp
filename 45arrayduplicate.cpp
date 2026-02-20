#include<iostream>
#include<vector>
#include<set>
using namespace std;


// BRUTE FORCE APPROACH

// void arrayDuplicate(vector<int>& arr){
//     set<int> st;
//     for(int i=0;i<arr.size();i++){
//         st.insert(arr[i]);
//     }
// }


//better solution: using auto iterator of set (meaning till iterate all over the set)
// void arrayDuplicate(vector<int>& arr){
//     int index=0;
//     for(auto it:st){
//         arr[index]= it;
//         index++;
//     }
// }


//OPTIMAL APROACH: USING 2 PTR
int removeDup(vector<int>arr){
    int start=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=arr[start]){
            //arr[start+1] since we are assigning the position of one arr index ahead of i to start ptr
            arr[start+1]=arr[i];
            start++;
        }
    }
    return(start+1) ;
}

int main(){
    vector<int>v={1,4,4,5,5,5,6};
    int newSize= removeDup(v);
    for (int i = 0; i < newSize; i++) {
        cout << v[i] << " ";
    }
    return 0;
}