#include<iostream>
using namespace std;

class Hero{
	public:
		int age;
		char health;
		
		//destructor
		~Hero(){
			cout<<"destructor called"<<endl;
		}
};
int main(){
	//static
	Hero a;
	
	//dynamic
	Hero *b=new Hero();
	//manually destructor call
	delete b;
	
	return 0;
	
}
