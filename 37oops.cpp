#include<iostream>
using namespace std;

class Hero{

    public:

    int health;

    // private: 
    //anything in private can only be accesed in class
    char level;

    // void level(){
    //     cout<<level<<endl;
    // }


};
int main(){
    Hero h1;

    h1.level='a';

    cout<<"Health is"<< h1.health <<endl;
    cout<<"level is"<< h1.level <<endl;

    return 0;

}