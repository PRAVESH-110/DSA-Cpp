#include<iostream>
using namespace std;

// int main(){
//     int i=5;
//     int &j=i;
//     j++;
//     cout<<j;
//     return 0;
// }

void update1(int& k){
    k++;
}
void update2(int k){
    k++;
}
int main(){
    int k=5;
    cout<<"before pass by ref"<<k<<endl;
    update1(k); //in pass by refernce same memory is allocated to differnet var/ functions
    cout<<"after pass by ref"<<k<<endl; //original value changes


    cout<<"before pass by value"<<k<<endl;
    update2(k);  //in pass by value a copy is creates 
    cout<<"after pass by value"<<k;
}
