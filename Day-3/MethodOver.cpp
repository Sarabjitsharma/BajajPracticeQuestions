#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    void info(string name, int rollNo) {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }

    void info(string name, int rollNo, string address) {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Student s;
    s.info("Nandini", 101);
    s.info("Nandini", 101, "123 Main St");
    return 0;
}
