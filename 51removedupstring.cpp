//remove duplicate characters from a string
#include<iostream>
#include<string>
using namespace std;

//you can aso use the method of 
void removeDup(string s){
    string result="";
    bool seen[256]={false};

    for(char c:s){
        //seen is the marker of- if seen before or not
        if(seen[c]==false){
            result=result+c;
            seen[c]=true;
        }
    }
    cout<<result;

}
int main(){
    string s="pravash";
    removeDup(s);
    return 0;
}