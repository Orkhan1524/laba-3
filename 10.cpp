#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    string a = "Can you can a can as a canner can can a can?";
    vector <char> v1(a.begin(), a.end());
    vector <char> v2;
    int i = 0;
	while (i < v1.size()) {
		if ((v1[i] == 'c' or v1[i] == 'C') and v1[i + 1] == 'a' and v1[i + 2] == 'n' and (v1[i+3]==' ' or v1[i + 3] == '?')) {
			v2.push_back('n');
			v2.push_back('e');
			v2.push_back('w');
			v2.push_back('_');
			v2.push_back('w');
			v2.push_back('o');
			v2.push_back('r');
			v2.push_back('d');
			i = i + 3;
		}
		else {
			v2.push_back(v1[i]);
			++i;
		}
	}
	for (char f : v2) {
		cout << f;
	}
}
