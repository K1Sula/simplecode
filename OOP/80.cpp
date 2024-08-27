#include <iostream>
#include <string>
using namespace std;

class Myclass
{
private:
    int age;
    string name;

public:
    Myclass(int a, string s)
    { // constructor
        age = a;
        name = s;
    }
    bool Checking()
    {
        if (age > 18 && name != "Aslan")
        {
            cout << "He if not  person which we looking for..." << endl;
            return true;
        } else {
            cout << "He is person which we looking for!" << endl;
            return false;
        }
    }
    ~Myclass(){
        cout << "All procudure end so i delete class"; //disconstructor
    }
};

int main() {
    int a;
    string s;
    cin >> a >> s;
    Myclass Person(a, s);

    bool so = Person.Checking();
    if (so) {
        cout << "Goodbye" << endl;
    } else {
        cout << "catch him" << endl;
    }

    return 0;
}

//this is mean  that disconstructor is  help to clean storage and also here we can delete dynamical array 
//also this will we start work when he see that int main fuction end and return 0 after that he delete class