#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    double m[10];
    int a,j=0;
    double b = 0, c = 0, d = 0, t = 0,l=0;
    cout << "Введите 10 элементов массива:";
    for (a = 0;a < 10;++a) {
        cin >> m[a];
    }
    for (a = 0;a < 10;++a) {
        b = b + m[a];
    }
    cout << "Сумма всех элементов:" << endl << b << endl;
    for (a = 0;a < 10;++a) {
        m[a] = pow(m[a], 2);
    }
    for (a = 0;a < 10;++a) {
        c = c + m[a];
    }
    cout << "Сумма квадратов всех элементов:" << endl << c << endl;
    for (a = 0;a < 10;++a) {
        m[a] = pow(m[a], 0.5);
    }
    for (a = 0;a < 6;++a) {
        d = m[a] + d;
    }
    cout << "Сумма первых шести элементов:" << endl << d << endl;
    cout << "Введите от какого по какой элемент массива будет считаться сумма:";
    int k1, k2;
    cin >> k1 >> k2;
    for (k1;k1 <= k2;++k1) {
        t = t + m[k1-1];
    }
    cout << t << endl;
    cout << "Среднее арифметическое всех эллементов:" << endl << b / (sizeof(m) / sizeof(*m));
    cout << endl;
    cout << "Введите от какого по какой элемент массива будет считаться среднее арифметическое:";
    int s1, s2;
    cin >> s1 >> s2;
    for (s1;s1 <= s2;++s1) {
        l = l + m[s1 - 1];
        ++j;
    }
    cout << "Среднее арифметическое этих элементов:" << endl << l / j;
}
