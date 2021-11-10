#include <iostream>
#include <vector>
#include <string>
#include <string_view>

#include "Hello.cpp"

using namespace std;

int main()
{
    vector<string> msg_tokens = {"Hello", "World", "!!"};
    for(const string& token: msg_tokens)
    {
        string_view viewToken {token};
        cout << viewToken << " ";
    }
    cout << endl;

    Hello objHello;
    cout << objHello.getMessage() << endl;
}