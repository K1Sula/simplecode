#include <iostream>
using namespace std;

void foo(int *a , int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5;
    int b = 6;
    foo(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}