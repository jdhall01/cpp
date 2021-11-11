#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(int *arr, int size) 
{
    //int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int incrVal = 1;
    auto incrFunc = [&incrVal](int x) {return x + incrVal;};
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    transform(arr, arr+size, arr, incrFunc);
    print(arr, size);//prints 2, 3, 4, 5, 6

    incrVal = 5;
    transform(arr, arr+size, arr, incrFunc);
    print(arr, size);//prints 2+5 = 7, 8, 9, 10, 11

    cout << "Completed." << endl;
}