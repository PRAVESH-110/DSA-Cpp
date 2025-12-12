#include<iostream>
using namespace std;

class Human{
	public:
		int age;
		int weight;
		
		void speak(){
			cout<<"you can speak"<<endl;
		}
};

class Animal{
	public:
		int age;
		int weight;
		
		void bark(){
			cout<<"you can bark"<<endl;
		}
};
//multiple inheritance 
class pravesh: public Human, public Animal{
	
};
int main(){
	pravesh pd;
	pd.speak();
	pd.bark();
	return 0;
}
