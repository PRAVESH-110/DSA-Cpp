//find min and max of an array
//IN CPP THERE ARE ALSO INBUILT FUNCTIONS LIKE max() min() etc FOR ARRAYS, BUT TRY USING NORML WAY FIRST
#include<iostream>
#include<vector>
using namespace std;

// int main() {
//     int size;
//     cout << "Enter size of array: ";
//     cin >> size;

//     int num[100];

//     cout << "Enter " << size << " elements:\n";
//     for(int i = 0; i < size; i++) {
//         cin >> num[i];
//     }

//     int max = num[0]; // Initialize with the first element

//     for(int i = 1; i < size; i++) {
//         if(num[i] > max) {
//             max = num[i];
//         }
//     }

//     cout << "The largest element is: " << max << endl;

//     return 0;
// }

//after revising later, try to recreate it withb help of functionss (getmax and getmin)

void arrayMax(vector<int> nums){
    int ptr=nums[0];
    for(int i=0;i<nums.size();i++){
        if(nums[i]>ptr){
            ptr=nums[i];
        }
    }
    cout<<ptr;
}
int main(){
    vector<int> arr= {1,4,3,2,0};
    arrayMax(arr);
    return 0;
}