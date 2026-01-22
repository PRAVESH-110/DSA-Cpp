//to find the frequency of characters in a string
#include <iostream>
#include<string>
using namespace std;

void frequency(string s) {

    //brute forcwe
    for(int i=0;i<s.length()-1;i++){
        int count=1;
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
                s[j]='0';
            }
        }
        if(s[i]!='0'){
            cout<<s[i]<<":"<<count<<endl;
    }
    }
    
}

int main(){
    string s="prava sh";
    frequency(s);
}