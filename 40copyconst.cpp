//OOPS--> 4 pillars --> inheritance, encapsulation, abstraction and polymorphism

//inheritance 
#include<iostream>
using namespace std; 


class Human{
    public: 
    int weight;
    int height;
    int age;

    public:
    int getAge(){
        return this-> age;
    }
    int setWeight(int w){
        this-> weight=w;
    }
}

//class male inheriting properties form class human
class Male: public Human{ 
    public:
    string color;
    void attack(){
        cout<<"Male sleeping"<<endl;
    }
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;
    cout<<object1.setWeight(56)<<endl;
    return 0;
}