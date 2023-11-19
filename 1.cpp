#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    double i[10];
    int a;
    int b;
    cout << "Введите 10 элеметов массива:";
    for (a = 0;a < 10;++a) {
        cin >> i[a];
    }
    for (a = 0;a < 10;++a) {
        i[a] = i[a] * 2;
    }
    for (a = 0;a < 10;++a) {
        cout << i[a] << " ";
    }
    cout << endl;
    cout << "Введите число,на которое будеть уменшать все элементы массива:";
    cin >> b;
    for (a = 0;a < 10;++a) {
        i[a] = i[a] - b;
    }
    for (a = 0;a < 10;++a) {
        cout << i[a] << " ";
    }
    cout << endl;
    cout << "Это числа,которые получились после деления на первый элемент массива:" << endl;
    int k = i[0];
    for (a = 0;a < 10;++a) {
        i[a] = (i[a]) / k;
    }
    for (a = 0;a < 10;++a) {
        cout << i[a] << " ";
    }
}

