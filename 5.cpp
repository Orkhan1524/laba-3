#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    vector<char>x(a.begin(), a.end());
    for (char y : x) {
        cout << y << " ";
    }
    cout << endl;
    if (a.size() % 2 == 0) {
        cout << "chetno";
    }
    else {
        cout << "nechetno";
    }
}
