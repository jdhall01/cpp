#include <iostream>

using namespace std;

template <class T>
class SmartPointer {
    public:
        SmartPointer(T* ptr = NULL): ptr(ptr) {}
        ~SmartPointer() {
            if(ptr != NULL) {
                delete ptr;
            }
        }
        T& operator*() {return *ptr;}

    private:
        T* ptr;
};

int main()
{
    SmartPointer ptrSmart(new int());
    *ptrSmart = 5;
    cout << *ptrSmart << endl;

    cout << "Completed." << endl;
}