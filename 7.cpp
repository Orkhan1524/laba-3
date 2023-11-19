#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    vector<char>x1(a.begin(), a.end());
    vector<char>x2(b.begin(), b.end());
    vector<char>x3(c.begin(), c.end());
    if (x1.size() == max(x1.size(), max(x2.size(), x3.size()))) {
        cout << "the_longest:" << a << endl;
    }
    if (x2.size() == max(x1.size(), max(x2.size(), x3.size()))) {
        cout << "the_longest:" << b << endl;
    }
    if (x3.size() == max(x1.size(), max(x2.size(), x3.size()))) {
        cout << "the_longest:" << c << endl;
    }
    if (x1.size() == min(x1.size(), min(x2.size(), x3.size()))) {
        cout << "the_shortest:" << a << endl;
    }
    if (x2.size() == min(x1.size(), min(x2.size(), x3.size()))) {
        cout << "the_shortest:" << b << endl;
    }
    if (x3.size() == min(x1.size(), min(x2.size(), x3.size()))) {
        cout << "the_shortest:" << c << endl;
    }
}