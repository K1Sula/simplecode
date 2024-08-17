#include <iostream>
using namespace std;


int main() {
    int *px = new int;  // *px - pointer , new - create dinamical storage , new int type of new

    *px = 10;

    cout << *px << " <= value" << endl;
    cout <<  px << " <= adres "; // we can see where our dinamical storage 

    //in c++ we don`t have trashcan this mean that we every time need  delete our dinamical stroge 
    delete px; // after that we delete!  
    //if we don`t do this, we will have memory leak утечка памяти
    

    /*
    in lesson 54 : we note that after use delete px they delete dinamical storage but not adres
    so we need to do 
    px = NULL this mean that adres 0
    or px =nullptr 
    */
}