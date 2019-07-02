#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int  c = 0 ;
    string str("if you can keep your head");
    for (auto c : str) {
        cout << c << endl;
    }

    return 0;
}

