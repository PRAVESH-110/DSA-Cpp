//setters and getters are used to access private/ protected access specifiers inside a class

//getter: used to get the values of the private/protected specifiers (READ ACCESS)
//setter: used to update the values from outside the scope of specifiers (pvt/protected) (WRITE ACCESS)

#include <iostream>
using namespace std;

class Hero{
    //in cpp updates we can directly initiailze with the declarations
    int level;
    char squad;

public:
    char id;

    int setLevel(int x){
        if (x>0){
            level=x;
        }
    }
    //here we get the read access with getter 
    int getLevel() {
        return level;
    }
    
};

int main() {
    Hero Pravesh;
    Pravesh.setLevel(4);
    cout<<"the level of pravesh is\n" << Pravesh.getLevel();
    return 0;
}


