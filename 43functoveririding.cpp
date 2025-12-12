//function overriding can only be done with run time polymorphism which can only support with inheritance
//same function name different method/ different task (happens only w/ inheritance)

#include<iostream>
using namespace std;
class Animal{
    public:
    	int age;
    	
    	void speak(){
    		cout<<"speaks"<<endl;
		}
};

class Dog : public Animal{
	public:
	void speaks(){
		cout<<"barks"<<endl;
	}
};
int main(){
	Dog d;
	//now how to decide which function to execute (base classs func or child class)
	d.speaks();
    return 0;
}
