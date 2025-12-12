//static keywords create a data member beclonging to class
//they dont require to create an obhect (can be directly called w.o initialization)

#include<iostream>
using namespace std;

class Hero{
    public:
    // Static member function
    static void print(){
        cout<<"hello"<<endl;
    }
};
int main(){
    return 0;
    //here we didnt require to create object (directly initialised)
    Hero::print();
}