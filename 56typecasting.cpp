#include <iostream>
using namespace std;

int main() {
  
  	// Two variables of different type
	int i = 10;
    char c = 'A';
  
  	// printing c after manually converting it
  	cout << (int)c << endl;
  	
  	// Adding i and c,
  	int sum = i + c;
  
  	// Printing sum
  	cout << sum;
  	
    return 0;
}
//output: 65 | As c manually converts to its ASCII
//there are 2 types of it: implicit and explicit
