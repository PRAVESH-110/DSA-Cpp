#include<iostream>
using namespace std;

void nonRepeating(string s){
    int freq[256]= {0};
    //you could also use simple for loop, but since its traversal along the string, this is better
    for(char c: s){
        freq[c]++;
    }

    for(char c:s){
        if(freq[c]==1){
            cout<<c;
            return;
        }
    }
}
int main(){
    string s="ama";
    nonRepeating(s);
    return 0;
}