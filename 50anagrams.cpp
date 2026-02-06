//checkk if 2 strings are anagrams
#include<iostream>
#include<string>

using namespace std;

bool anagram(string str1, string str2){
    int freq1[256]={0};
    int freq2[256]={0};
    for (char c: str1) freq1[c]++;
    for(char c: str2) freq2[c]++;

    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;

}
int main(){
    string str1="pravash";
    string str2="prvaash";
    if(anagram(str1, str2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}