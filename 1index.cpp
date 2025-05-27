#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
    }
}