#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 12; 
    int a0 = 1, a1 = 2;
    int a2;

    cout << "Перші " << n << " елементів послідовності:" << endl;

    cout << a0 << " " << a1 << " "; 

    for (int i = 2; i < n; i++) {
        a2 = 3 * a1 + 2 * a0;
        cout << a2 << " ";
        a0 = a1;
        a1 = a2;
    }

    cout << endl;

    return 0;
}
