//to find the frequency of characters in a string
#include <iostream>
#include<string>
using namespace std;

void frequency(string s) {

    //brute force
    // for (int i = 0; i < s.length(); i++) {
    //     int count = 1;

    //     if (s[i] == ' ') continue;

    //     for (int j = i + 1; j < s.length(); j++) {
    //         if (s[i] == s[j]) {
    //             count++;
    //             s[j] = '0'; // mark counted
    //         }
    //     }

    //     if (s[i] != '0') {
    //         cout << s[i] << " : " << count << endl;
    //     }
    // }

    //optimal
    
}
int main(){
    string s="pravesh";
    frequency(s);
}