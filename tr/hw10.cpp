#include <iostream>
using namespace std;

template <typename T>
void swap1(T &a, T &b) {
    T newv = a;
    a = b;
    b = newv;
}

int main() {
    int a, b;
    cin >> a >> b;

    swap1 (a, b);

    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}
