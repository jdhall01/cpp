#include <iostream>

using namespace std;

class Temp {
    public:
    Temp() {
        cout << "temp" << endl;
    }
    void print() {
        cout << "Hello World!!" << endl;
    }
};
Temp temp;

int main() {
    Temp temp;
    temp.print();
}