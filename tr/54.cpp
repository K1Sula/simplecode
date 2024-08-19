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

    // dualarray dinamical
    int rows,column;
    cin >> rows >> column;
    int **arr2 = new int*[rows]; // we create dualarray in enterens rows

    for (int i = 0; i < rows; i++) {
        arr2[i] = new int[column]; // we create array in dualarray
    }

    for (int i = 0; i < rows; i++) {
        delete [] arr2[i];
    }

    delete [] arr2 ;



 }