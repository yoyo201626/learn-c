#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> msg {"hello", "c++", "World", "from", "VS code", "and the c++ extension" };

    for(const string & word : msg) {
        cout << word << " ";
    }
    cout << endl;
}
