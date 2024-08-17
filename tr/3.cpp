#include <iostream>
using namespace std;

long long factorial(int i)
{
    if (i == 0) {
        return 1;
    }
    return i * factorial(i - 1);
}

int main()
{
    int n;
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int num = factorial(i);
    //     cout << num << " ";
    // }
    long long sum = factorial(5);
    cout << sum;
} 