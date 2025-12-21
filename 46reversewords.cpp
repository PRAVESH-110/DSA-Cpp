// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include <algorithm>


using namespace std;

void reverseWords(string s){
    reverse(s.begin(),s.end());

    int start=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' || i==s.length()){
            reverse(s.begin()+start, s.begin()+i);
        }
    }
    cout<<s;
}
int main() {
    string s="my name is pravesh";
    reverseWords(s);
    return 0;
}