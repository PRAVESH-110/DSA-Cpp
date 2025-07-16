//difference between the character array and integer array is that "cout" function implements directly as....
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};

    char ch[6]="abcde"; //6 because of the null character at last

    // cout<<arr<<endl;
    //prints the adress of array
    // cout<<ch<<endl;
    //prints the first character of array

    int *ptr= &arr[0];  
    cout<<ptr<<endl; //prints the adress of first element of array

    char *ptr2=&ch[0]; //always print entire string as the cout function is diff for character array
    cout<<ptr2<<endl;
}