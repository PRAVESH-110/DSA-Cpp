//we can use setter, getter concepts to access a data member present inside of a private class
#include<iostream>
using namespace std;

class hero{
    private:
    char level;
    int age;

    //create a setter/getter function inside of a public class 
    public:

    int getage(){
        return age; //getter to access a private class property
        //currently return a garbage value (size 1 byte) since no value given in function 
    }
    int setage(int a){  //setter to set the property of a private class
        age=a;
    }
    int getlevel(){
        return level;
    }

}; 

int main(){

    //static allocation
    hero pravesh;
    cout<<"pravesh age is"<< pravesh.getage()<<endl;
    cout<<"new age of pravesh is"<<pravesh.setage(70)<<endl;

    //we can also dynamically allocate memory-> heap memory
    hero *rohit =new hero;
    cout<<"age is "<<(*rohit).getage()<<endl;
    
    //other way to write it is:
    cout<<"age is"<<rohit->getage()<<endl;

}