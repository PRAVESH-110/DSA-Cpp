//find the longest substring without repeating character, and return only length of substring
#include<iostream>
#include<string>
using namespace std;

int subString(string s){
    int freq[256]={0};
    int l=0;
    int r=l+1;
    for(int i=0;i<s.length();i++){
        if(freq[s[i]]==0){
            r++;
        }
        else{
            l=r+1;
            r=l+1;
        }
    }

}
int main(){
    string s="cadbzabcd";
    subString(s);
    return 0;
}
