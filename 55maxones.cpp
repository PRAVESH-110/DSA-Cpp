#include<iostream>
#include<vector>
using namespace std;

int maxOnes(vector<int> arr, int k){
    int l=0;
    int r=l+1;
    for(int i=r;i<arr.size();i++){
        int zero=0;
        if(arr[i]==1){
            r++;
        }
        else{
            zero++;
            r++;
        }
    }
}
int main(){
    vector<int> arr={1,1,1,0,0,1,1,1,1,0};
    int k=2;
    maxOnes(arr,k);
    return 0;
}