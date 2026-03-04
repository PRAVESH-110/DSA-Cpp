#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    string name;
    int salary;

public:
    void setDetails(string n, int s) {
        name = n;
        salary = s;
    }

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class 1
class Developer : public Employee {
public:
    void showRole() {
        cout << "Role: Developer" << endl;
    }
};

// Derived class 2
class Manager : public Employee {
public:
    void showRole() {
        cout << "Role: Manager" << endl;
    }
};

int main() {
    Developer d;
    d.setDetails("Alice", 80000);
    d.showRole();
    d.showDetails();

    cout << endl;

    Manager m;
    m.setDetails("Bob", 100000);
    m.showRole();
    m.showDetails();

    return 0;
}