#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    vector<char>x1(a.begin(), a.end());
    vector<char>x2;
    for (int i = 0; i < x1.size(); ++i) {
        x2.push_back('*');
    }
    for (int i = 0; i < x1.size(); ++i) {
        x2.push_back(x1[i]);
    }
    for (int i = 0; i < x1.size(); ++i) {
        x2.push_back('*');
    }
    for (char y : x2) {
        cout << y << " ";
    }
}