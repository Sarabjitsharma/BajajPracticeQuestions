#include <iostream>

using namespace std;

class Parent {
public:
    virtual void details() {
        cout << "This is DSA class" << endl;
    }
};

class Child : public Parent {
public:
    void details() override {
        cout << "This is child class" << endl;
    }
};

int main() {
    Child c;
    c.details();
    return 0;
}
