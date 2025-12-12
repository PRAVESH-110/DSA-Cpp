#include<iostream>
using namespace std;

//2/more funct can have the same name but must differ in either the parameter or return type
class A {
    public:
 
    //this will work as they have different return parameter but 
    void sayHello(){
        cout<<"Hello pd"<<endl;
    }

    int sayHello(string s){
        cout<<"hello"<<s<<endl;
    }

    //this couldnt be used
    // void sayHello(){
    //     cout<<"Hello pd"<<endl;
    // }

    // int sayHello(){
    //     cout<<"hello"<<s<<endl;
    // }
};
int main(){
    A obj;
    obj.sayHello();

    return 0;
}
