//find first non repeating character in string
#include <iostream>
using namespace std;

void nonRepeating(string s){
    int freq[256]={0};
    for(char c:s){
        freq[c]++;
    }
    for(char c:s){
        if(freq[c]==1){
            cout<<c;
            break;
        }
    }
}
int main() {
  	string s="praveen";
    nonRepeating(s);
    return 0;
}
