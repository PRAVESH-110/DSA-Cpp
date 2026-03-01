// find longest substring of ones together and must only contain k number of 0's
#include<iostream>
#include<list>
using namespace std;

int maxOnes(list<int> nums, int k){
    int l=0, r=0, zeroes=0, maxlength=0;
    while(r <nums.size()){
        if(nums[r]==0) zeroes++;

        if(zeroes > k){
            if(nums[l]==0){
                zeroes--;
                l++;
            }

        }
        if(zeroes<=k){
            int len=r-l+1;
            maxlength= max(maxlength, len);
        }
        r++;
    }
    return maxlength;
}
int main(){
    list<int> arr={1,1,1,0,0,1,1,1,1,0};
    int k=2;
    maxOnes(arr,k);
    return 0;
}