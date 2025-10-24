//suppose input is n=432, output= four three two 
//input= 570 , output= five seven zero
#include<iostream>
using namespace std;
void saydigits(int n, string arr[]){
    if (n==0) return ;

    int digit=n%10;
    n=n/10;

    saydigits(n,arr);

    //since we dont want reversed digits, hence we write hte cout before rec cacll
    cout<<arr[digit]<<" ";
    
}
int main(){

    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl<<endl;
    saydigits(n,arr);
    cout<<endl<<endl;

    
    return 0;
}