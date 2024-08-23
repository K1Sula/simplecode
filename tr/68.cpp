#include <iostream>
#include <string>

#define DEBUG

using namespace std;

void checkname(string s) {
    int size = s.length() - 1;
    if (s[size] == 'v' && s[size - 1] == 'o') {
        cout << s << " has kazakh passport" << endl;
    } else {
        cout << s <<  " has international passport" << endl;
    }
}

int main() {

    #ifdef DEBUG // if in define we turn on them this working

    cout << "Start how many name you want to check: ";

    #else //if in define we turn off them this working

    cout << "No way";

    #endif


    int n;
    cin >> n;

    string word;

    string s[n];

    for  (int i = 0 ; i < n ; i++) {
        cin >> word;
        s[i] = word;
    }

    while (n != 0) {
        int queue = n;
        checkname(s[queue - 1]);
        n--;
    }
}