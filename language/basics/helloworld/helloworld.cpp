#include <iostream>
#include <vector>
#include <string>

#include "Hello.cpp"

using namespace std;

int main()
{
    vector<string> msg_tokens = {"Hello", "World", "!!"};
    for(const string& token: msg_tokens)
    {
        cout << token << " ";
    }
    cout << endl;

    Hello objHello;
    cout << objHello.getMessage() << endl;
}