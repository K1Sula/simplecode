#include <iostream>
using namespace std;
// more example for incapsulation in OOP{coffee blender}

class CoffeeBlender { 
private: // тут я даю обязательный параметр что 220 В и ее никак не изменить!!!
    bool Voltage(int num)
    {
        if (num == 220) {
            return true;
        } else {
            return false;
        }
    } // короче значит тут никак не изменить параметр тут 

public:// а тут и начало работы блэндера но нужно проверить плюс тут значение могут измениться
    void Start(int n)
    {
        bool Work = Voltage(n);
        if (Work)
        {
            cout << "Brrr..." << endl;
        } else {
            cout << "Something wrong :(" << endl;
        }
    }
};

int main() {
    int numberVoltage;
    cout << "Please enter voltage: " ;
    cin >> numberVoltage;
    CoffeeBlender first;
    first.Start(numberVoltage);
    return 0;

}