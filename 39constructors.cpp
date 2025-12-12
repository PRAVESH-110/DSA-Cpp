#include <iostream>
using namespace std;

class hero{
    public:
    int age;
    char level;

    //a cdefault constructor is created
    hero(){
        cout<<"constructor called"<<endl;
    }
};
 
int main(){
    //object created statically
    hero pravesh;

    //object created dynamically
    hero *pd= new hero;

    //both call same
    return 0;
}