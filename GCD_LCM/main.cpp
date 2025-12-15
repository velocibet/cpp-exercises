#include <iostream>
#include <windows.h>
using namespace std;

int getGCD(int a, int b) {
    int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int getLCM(int a, int b) {
    return a * b / getGCD(a, b);
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int a, b;
    cin >> a >> b;

    cout << "최대공약수: " << getGCD(a, b) << endl;
    cout << "최소공배수: " << getLCM(a, b) << endl;

    return 0;
}
