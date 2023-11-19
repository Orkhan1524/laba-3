#include <iostream>
#include <vector>
#include <string> 
using namespace std;
int main()
{
    string a;
    int c = 0;
    getline(cin, a);
    vector<char>x(a.begin(), a.end());
    for (char y : x) {
        if (y == 'a' or y == 'A') {
            ++c;
        }
    }
    double p = (c * 100) / x.size();
    cout << p << "%";
}
