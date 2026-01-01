#include<iostream>
#include<vector>
#include<set>
using namespace std;


// BRUTE FORCE APPROACH
// void arrayDuplicate(vector<int>& arr){
//     set<int> s(arr.begin(), arr.end());  // removes duplicates

//     int i = 0;
//     for (int x : s) {
//         arr[i++] = x;    // overwrite original array
//     }

//     arr.resize(s.size());  // remove extra elements
// }

//OPTIMAL APROACH: USING 2 PTR
int removeDup(vector<int>arr){
    int start=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=arr[start]){
            arr[start+1]=arr[i];
            start++;
        }
    }
    return start+1;
}

int main(){
    vector<int>v={1,4,4,5,5,5,6};
    int newSize= removeDup(v);
    for (int i = 0; i < newSize; i++) {
        cout << v[i] << " ";
    }
    return 0;
}