#include <iostream>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	vector<int>m = {1,3,2,-4,9,6,8,-10,-30,20};
	for (int a = 0;a < m.size();++a) {
		if (m[a] < 0) {
			m.erase(m.cbegin() + a);
			break;
		}
	}
	int l = 0;
	for (int a = m.size() - 1;a > 0;--a) {
		l++;
		if (m[a] % 2 == 0) {
			m.erase(m.cend()-l);
			break;
		}
	}
	for (int a = 0;a < m.size();a++) {
		cout << m[a] << " ";
	}

}
