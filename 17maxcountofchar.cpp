//find most frequently occuring lowercase characters in a string 

#include<iostream>
#include<string>
#include<vector>

using namespace std;

char getmaxoccuringstring(string s){
    int arr[26]={0}; // Array to store frequency of each lowercase letter

    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int count=0;
        count=ch-'a'; //converts index back to the character and returns the ASCII value of the character
        arr[count]++;
    }

    int maxi=-1, ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans=ans+'a';
    return finalans;
}
