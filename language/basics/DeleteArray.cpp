#include <iostream>

using namespace std;

class A {
    public:
    ~A() {
        cout << "Inside ~A()" << endl;
    }
};

int main() {
    A* arrayA = new A[2];
    delete [] arrayA;

    cout << "Completed!" << endl;
}