//find the second largest element in an array
#include<iostream>
#include<vector>
using namespace std;


//brute force method

// void secLargest(vector<int> arr){
	
// 	int largest=arr[0];
// 	for(int i=0;i<arr.size();i++){
// 		if(arr[i]>largest){
// 			largest=arr[i];
// 		}
// 	}
// 	int j;
// 	for(j=arr.size();j>0;j--){
// 		if(arr[j]!=arr[j-1]){
// 			break;
// 		}
// 	}
// 	cout<<arr[j-1];
// }


//optimal approach
void secLargest(vector<int> arr){
	int largest=arr[0];
	int second= -1;
	for(int i=0;i<arr.size();i++){
		if(arr[i]>largest){
			second=largest;
			largest=arr[i];
		}
		else if(arr[i]<largest && arr[i]>second){
			second=arr[i];
		}
	}
	cout<<second;
}

int main(){
	vector<int>v={1,4,5,4,9};
	secLargest(v);
	return 0;
}
