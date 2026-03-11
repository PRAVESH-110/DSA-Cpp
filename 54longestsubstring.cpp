//find the longest substring without repeating character, and return only length of substring
#include<iostream>
#include<string>
using namespace std;

int subString(string s){
    int l=0;
    int r=l+1;
    int hash[256]={-1};
    for(int i=0;i<s.length();i++){
        if(hash[s[i]]==-1){
            r++;
        }
        l=i+1;
        r=l+1;
    }

}
int main(){
    string s="cadbzabcd";
    subString(s);
    return 0;
}
