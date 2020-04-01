#include <fuzzywuzzy.hpp>

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    const string a{"I'm in your mind"};
    const string b{"I'm in your mind fuzz"};
    cout << fuzz::ratio(a, b) << endl;
    return 0;
}
