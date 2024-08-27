#include <iostream>
#include <string>
using namespace std; // constructor  in class

class Point
{
private: // for incopsulation, also we can use in other funtion
    int x;
    int y;

public:
    // create constructor
    Point(int valueX, int valueY)
    {
        x = valueX;
        y = valueY;
    }

    int GetX() // геттер
    {
        return x;
    }

    void SetX(int valueX)
    { // сеттер
        x = valueX;
    }
};

int main()
{
    int num;
    cin >> num;

    Point a(33 ,1); //Here we necessarily write [it`s like __init__ in Python]
    a.SetX(num);

    int numnew = a.GetX();
    cout << numnew;
    return 0;
}