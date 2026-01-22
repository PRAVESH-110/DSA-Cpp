#include<iostream>
#include<cmath>
#include<string>
using namespace std;

char toUpper(char ch){
    if(ch >= 'A' && ch<= 'Z'){
        return ch;
    }
    else if(ch>='a' && ch<='z'){
        char temp= ch - 'a'+'A';
        return temp;
    }
    else{
        return ch; //non alphabet
    }
}
string camelCase(string s){
    //string to store result
    string result="";

    //capitalize is the marker to capitalize next letter or not
    bool capitalize= false;

    //we do not use any method to remove hte spacs rather, we mark the marker as true and skip it altogether
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            capitalize= true;
        }
        else{
            if(capitalize){
                //the main letter after space (run the function and mark the marker as false for next iteratuon)
                result=result + toUpper(s[i]);
                capitalize=false;
            }
            else{
                //other alphabets to come
                result =result+s[i];
            }
        }
    }
    cout<<result;
}

int main(){
    string s="hello world";
    camelCase(s);
    return 0;
}

