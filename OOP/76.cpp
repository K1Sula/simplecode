#include <iostream>
#include <string>
using namespace std;

class Point
{
private: // for incopsulation, also we can use in other funtion
    int x;
    int y;
public:
    int GetX() //геттер
    {
        return x;
    }

    void SetX(int valueX) { // сеттер
        x = valueX;
    }
};

int main() {
    int num;
    cin >> num;

    Point a;
    a.SetX(num);

    int numnew = a.GetX();
    cout << numnew;
    return 0;

}

// у меня был вопрос зачем нам нужен private метод если туда ничего не можем написать и изменить
// оказалось что если ты можешь туда пихнуть типо правило или параметр который должен всегда работать как ты хочешь
// то это функция это прям спасает а вот например тебе нужно изменить скажем параметры то испоьльзуем геттеры и сеттеры 
// это правило инкапсуляции 