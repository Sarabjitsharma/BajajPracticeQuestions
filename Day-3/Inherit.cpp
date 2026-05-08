#include <iostream>

using namespace std;

class Parent {
public:
    virtual void details() {
        cout << "This is DSA class" << endl;
    }
    void dsa() {
        cout << "We are learning DSA" << endl;
    }
};

class Child : public Parent {
public:
    void impl() {
        cout << "we are implementing dsa using cpp" << endl;
    }
};

int main() {
    Child c;
    c.details();
    c.dsa();
    c.impl();
    return 0;
}
