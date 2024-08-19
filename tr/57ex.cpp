#include <bits/stdc++.h> 
using namespace std;

void SwapArr(int **arr1, int **arr2, int n) { // это не двумерный массив а динамический массив который с указателом
    int *exarr = *arr1; //новый динамический массив который еще берет ее указатель

    *arr1 = *arr2;
    *arr2 = exarr;
}

int main(){
    int n;
    cin >> n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];

    // Инициализация генератора случайных чисел текущим временем
    srand(time(0));

    for (int i = 0; i < n; i++) {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 2;
    }
    //1
    cout << "array 1 elements\t";

    for (int i = 0; i < n ; i++) {
        cout << arr1[i] << ",";
    }
    cout << endl;

    //2
    cout << "array 2 elements\t";

    for (int i = 0; i < n ; i++) {
        cout << arr2[i] << ",";
    }
    cout << endl;

    SwapArr(&arr1,&arr2,n);

    cout << "swapped arrays: " << endl;

    //1
    cout << "array 1 elements\t";

    for (int i = 0; i < n ; i++) {
        cout << arr1[i] << ",";
    }
    cout << endl;

    //2
    cout << "array 2 elements\t";

    for (int i = 0; i < n ; i++) {
        cout << arr2[i] << ",";
    }
    cout << endl;


    delete [] arr2;
    delete [] arr1;

}

//& тут амперсант играет роль не ссылки, а адреса а вот поинтер* как указатель 
// таким образом у нас там получилось 2 звезды 