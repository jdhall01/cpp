#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

class LambdaCaptureThisByValue {

    public:
        LambdaCaptureThisByValue(int scale) : _scale(scale) {}
        void printScaled(const vector<int>& v) {
            for_each(v.begin(), v.end(), [*this](int i){cout << i * _scale << " ";});
            cout << endl;
        }

    private:
        int _scale;
};

void lambda_value_capture()
{
    int value = 10;
    auto copy_value = [value] {
        return value;
    };
    value = 20;
    int stored_value = copy_value();
    cout << "Value Capture: Stored value: " << stored_value << endl;
}

void lambda_value_capture_default()
{
    int value = 10;
    auto copy_value = [=] { //default value capture using [=]
        return value;
    };
    value = 20;
    int stored_value = copy_value();
    cout << "Value Capture: Stored value: " << stored_value << endl;
}

void lambda_reference_capture()
{
    int value = 10;
    auto copy_value = [&value] {
        return value;
    };
    value = 20;
    int stored_value = copy_value();
    cout << "Reference Capture: Stored value: " << stored_value << endl;
}

void lambda_reference_capture_default()
{
    int value = 10;
    auto copy_value = [&] { //default reference capture using [&]
        return value;
    };
    value = 20;
    int stored_value = copy_value();
    cout << "Reference Capture: Stored value: " << stored_value << endl;
}
/*
void lambda_capture_generic()
{
    unique_ptr vec = make_unique<vector<int>>(10);
    auto print = [v = move(vec)]{
        //for(int i: v){
            //cout << *v;
        //}
        //cout << endl;
        cout << *v;
        return *v;
    };
}*/

int main()
{
    lambda_value_capture();//prints 10
    lambda_value_capture_default();//prints 10
    lambda_reference_capture();//prints 20
    lambda_reference_capture_default();//prints 20

    vector<int> v = {1,2,3,4,5};
    LambdaCaptureThisByValue objScaleBy4(4);
    objScaleBy4.printScaled(v);
    LambdaCaptureThisByValue objScaleBy10(10);
    objScaleBy10.printScaled(v);

    cout << "Completed." << endl;
}