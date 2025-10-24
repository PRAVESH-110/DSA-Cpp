//there is a default constructor and when we create one outself the default gets deleted and replaced

//contructor - 3 types: simple, parameterized and copy const.
#include<iostream>
using namespace std;

class hero{

    private:
    int health;

    public:
    char level;

    hero(){
        cout<<"ccontructor called by default"<<endl;
    }

    //parameterisd const
    hero(int health){
        cout<<"this-> output"<<this<<endl;
        //we use 'this' to point to the nearest constructor (here this points to health of line-7)
        this-> health=health;
    }

    int gethealth(){
        return health; //getter (although not req)
    }
};
int main(){
    hero pravesh(10);
    cout<<"address if pravesh using this"<< &pravesh<<endl;
    pravesh.gethealth();

    hero *rohit=new hero; //dynamically created object 
    return 0;
}
