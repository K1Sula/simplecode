 #include <iostream>
 using namespace std;
 int main() {
    int size;
    cin >> size;
    int *arr = new int[size]; //to create dinamical array after all that we need to write []

    for (int i = 0; i < size ; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
        cout << arr + i  << endl;
    }
    delete [] arr; // here also for delete

 }