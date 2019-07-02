#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s("if you can keep your head");
    if(!s.empty())
        s[0] = toupper(s[0]);
    cout << s << endl;
    return 0;
}

