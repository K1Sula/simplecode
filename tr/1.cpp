#include <iostream>
using namespace std;

int *checking(int a, int arr[])
{
    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr[i] = 100;
        }
    }
    return arr;
}

int main()
{
    int a;
    cin >> a;

    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    int *result = checking(a, arr);

    for (int j = 0; j < a; j++)
    {
        cout << result[j] << " ";
    }
}