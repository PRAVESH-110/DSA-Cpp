//count ehte number of words in a string
#include<iostream>
using namespace std;

int countWords(string s){
    int count=1;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            count++;
        }
    }
    return count;
}
int main(){
    string s="my name is pravesh dhal f";
    cout<<countWords(s);
    return 0;
}