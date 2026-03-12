//find the longest substring without repeating character, and return only length of substring
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int subString(string s){
    vector<int> lastIndex(256, -1);

        int l = 0;
        int maxLen = 0;

        for(int r = 0; r < s.size(); r++) {

            if(lastIndex[s[r]] != -1) {
                l = max(l, lastIndex[s[r]] + 1);
            }

            lastIndex[s[r]] = r;

            maxLen = max(maxLen, r - l + 1);
        }

        return maxLen;
}
int main(){
    string s="cadbzabcd";
    subString(s);
    return 0;
}
