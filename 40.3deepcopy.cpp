#include<iostream>
using namespace std;

class student{
	int age;
	char* names;
	
	public:
		student (int age, char* names){
			this->age=age;
			
			//deep copy
			this->names= new char[strlen(names)+ 1];
			strcpy(this->names, names);
		}
		
};
int main(){
	student pravesh(10, 'psd');
	return 0;

	
}
