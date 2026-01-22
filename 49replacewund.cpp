#include<iostream>
#include<String>
using namespace std;
//can use reference to pass real and not copy

//brute force: store in a result string
string replace(string &s){
    //optimal in place
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s[i]='_';
        }
    }
    cout<<s;

}

int main(){
    string s="hi pravesh";
    replace(s);

    return 0;
}