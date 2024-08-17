#include <iostream>
using namespace std;

int main() {
    cout << "Enter which type of symbol you want to print: ";
    char s;
    cin >> s;

    cout << "How do you want to see the symbol line? Horizontal or Vertical (H and V): ";
    char c;
    cin >> c;

    int a = 0; // Initialize the counter variable

    switch (c) {
        case 'H': // Use character constants for cases
            while (a < 100) {
                cout << s; // Print the symbol
                a++;
            }
            break; // Break after each case

        case 'V':
            while (a < 100) {
                cout << s << endl; // Print the symbol followed by a newline
                a++;
            }
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0; // Return statement in main
}
