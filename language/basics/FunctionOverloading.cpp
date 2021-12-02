#include <iostream>

using namespace std;

int area(int edge) {
    return edge*edge;
}

int area(int length, int breadth) {
    return length*breadth;
}

float area(int base, int height) {
    return (base * height)/2;
}

int main() {
    int edge = 4;
    int biggerEdge = 6;

    cout << "Area of Square of size " << edge << " is " << area(edge) << endl;
    cout << "Area of Rectangle of size " << edge << " and " << biggerEdge << " is " << area(edge, biggerEdge) << endl;
    cout << "Area of Triangle of base " << edge << " and height " << biggerEdge <<" is " << area(edge, biggerEdge) << endl;
}