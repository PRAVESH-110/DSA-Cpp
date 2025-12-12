#include<iostream>
using namespace std;

class Animal{
    public:
    int age=11;
    int weight;

    public:
    void speak(){
        cout<<"I am speaking"<<endl;
    }
};
// single level inheritance
class Dog: public Animal{ //class animal inherited in public mode 
   
};


int main(){
	//here object of class Dog inherits from class Animal
    Dog d;
    d.speak();
    cout<<d.age<<endl;
    return 0;
}
