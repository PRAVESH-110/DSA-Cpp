//find out sqrt to the exact digit
#include<iostream>
using namespace std;

int binarySearch(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int sqr=mid*mid;
        if(sqr==n){
            return mid;
        }
        if(sqr<n){
            
        }
    }
    return ans;
}

int floorSqrt(int n)
{
    return binarySearch(n);
    // Write your code here.
    
}
