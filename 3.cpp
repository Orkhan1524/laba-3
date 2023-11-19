#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int m[20];
    int a,x1,y1,d1,x2,y2,d2;
    cout << "Введите 20 элементов массива:";
    for (a = 0;a < 20;++a) {
        cin >> m[a];
    }
    cout << endl;
    x1 = m[0];
    y1 = m[1];
    d1 = m[2];
    x2 = m[17];
    y2 = m[18];
    d2 = m[19];
    m[0] = x2;
    m[1] = y2;
    m[2] = d2;
    m[17] = x1;
    m[18] = y1;
    m[19] = d1;
    for (a = 0;a < 20;++a) {
        cout << m[a] << " ";
    }
}
