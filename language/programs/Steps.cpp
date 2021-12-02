#include <iostream>

using namespace std;

int main() {
    int n = 100;
    int i = 1;
    int count = 1;
    while(i < n) {
        for(int j = 0; j < count; j++) {
            if(i < n) {
                cout << i << " ";
                i++;
            }
        }
        count++;
        cout << endl;
    }

    cout << "Completed!" << endl;
}