#include <bits/stdc++.h>
using namespace std;

// We can say that class is parametr 
// Object we can use  

class Human { // this is class
public:

    int age;
    int weight;
    string city;
    string name;

    void print() {
        cout << "Age:\t" << age << endl;
        cout << "Weight:\t" << weight << endl;
        cout << "From city:\t" << city << endl;
        cout << "Name:\t" << name << endl; // мы можем просто писать имена перемен потому что они находиться в зоне видности 
    }

};

int main(){

    Human firstHum;// this is object
    firstHum.age = 18;
    firstHum.weight = 73;
    firstHum.name = "Sula";
    firstHum.city = "Almaty";

    firstHum.print();
    cout << endl;
    Human secondHum; // this also object
    secondHum.age = 18;
    secondHum.weight = 50;
    secondHum.name = "Arailym";
    secondHum.city = "Satpaev";
    secondHum.print();

    return 0;
}

// Значит что классы это как параметр всего из-за этого говорят что оно тоже как тип данных
// а вот дальше когда мы используем параметры класс то это уже как объект 