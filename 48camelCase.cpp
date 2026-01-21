#include<iostream>
#include<string>
using namespace std;

bool checkPal(string s){
    int start=0;
    int end=s.length()-1;
        while(start<end){
            if(s[start]!=s[end]){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
}

int main(){
    string s="ama";
    checkPal(s);
    if(checkPal(s)){
        cout<<"is a palindrome";
    }
    else{
        cout<<"not pal";
    }
    return 0;
}
