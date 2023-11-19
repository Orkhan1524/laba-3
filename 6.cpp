#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    vector<char>x1(a.begin(), a.end());
    vector<char>x2(b.begin(), b.end());
    if (x1.size() > x2.size()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
}