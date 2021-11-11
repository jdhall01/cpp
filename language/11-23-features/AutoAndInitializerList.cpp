#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

class MyVector {
    public:
        MyVector(initializer_list<int> elements)
        {
            for(auto element: elements)
            {
                _arr.push_back(element);
            }
        }

        //requires C++20
        /*
        int add(auto i, auto j)
        {
            return i + j;
        }
        */

        void print()
        {
            for(auto i: _arr)
            {
                cout << i << " ";
            }
            cout << endl;
        }

    private:
        vector<int> _arr;
};

int main()
{
    MyVector myVec = {3, 9, 6, 4, 8};
    myVec.print();
    cout << "Completed." << endl;
}