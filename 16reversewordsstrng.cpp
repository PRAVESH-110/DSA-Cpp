//reverse words in a string (keep the spaces as is and reverse the words)
#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Solution{
    public:

    void reverseWords(vector<char>& s) {
        int n = s.size();

        // Step 1: Reverse the entire array
        reverse(s.begin(), s.end());

        // Step 2: Reverse each word individually
        int start = 0;
        for (int end = 0; end <= n; ++end) {
            if (end == n || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }
    }
};