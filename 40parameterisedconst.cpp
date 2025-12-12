//parameterisez constructor
#include<iostream>
using namespace std; 


class Human{
    public: 
    int age;
    int weight;


    Human(){
    	cout<<"default construcvtor that was deleted"<<endl;
	}
    public:
    int getAge(){
        return age;
    }
    int getWeight(){
        return weight;
    }
    Human(int age, int weight){
        this->age=age;
        cout<<age<<endl;
        this->weight=weight;
        cout<<weight;
    }
};


int main(){
    Human(10,30);
    return 0;
}
