#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a, b;
    cin >> a >> b;

    int ia = a;
    int ib = b;

    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    cout << "최대공약수: " << a << endl;
    cout << "최소공배수: " << ia * ib / a << endl;

    return 0;
}
