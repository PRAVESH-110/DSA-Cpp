//find the second largest element in an array
#include<iostream>
#include<vector>
using namespace std;

void secLargest(vector<int> arr){
	
	int largest=arr[0];
	for(int i=0;i<arr.size();i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
	int j;
	for(j=arr.size();j>0;j--){
		if(arr[j]!=arr[j-1]){
			break;
		}
	}
	cout<<arr[j-1];
}


int main(){
	vector<int> v= {1,4,6,9,4};
	secLargest(v);
	return 0;
}
