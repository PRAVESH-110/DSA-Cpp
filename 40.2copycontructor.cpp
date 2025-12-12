#include<iostream>
using namespace std;

class Hero{
    public:
    int health;
    int age;
    //deafult const created since its deleted during copy const creation
    Hero(){
        cout<<"default constructor called"<<endl;
    }
    
    //parameterisez constructor
    Hero(int health){
    	this->health=health;
	}
    Hero(int health, int age){
        this-> health= health;
        this->age=age;
    }
    
    //copy constructor
    //always pass bu refernce in copy par (else endless loop runs)
    Hero(Hero& temp){
    	//copy constructor called
    	this->health= temp.health; //temp var for assign window properts to temp props
    	this->age=temp.age;
	}
	void print(){
		cout<<"health"<<this->health<<endl;
		cout<<"age"<<this->age<<endl;
	}
};
int main(){
    Hero pravesh(100, 21);
    pravesh.print();
    Hero pd(pravesh);
    pd.print();
	return 0;
	}
