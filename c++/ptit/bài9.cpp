#include <iostream>
#include <string>

using namespace std;

int main() {
    string binaryNumber;
    unsigned int decimalNumber = 0;

    cout << "ENTER AN 8-BIT BINARY NUMBER: ";
    cin >> binaryNumber;

    if (binaryNumber.length() != 8) {
        cout << "INVALID CHARACTER ENTERED! (Not an 8-bit number)" << endl;
        return 1;
    }

    for (char c : binaryNumber) {
        if (c != '0' && c != '1') {
            cout << "INVALID CHARACTER ENTERED!" << endl;
            return 1;
        }
        decimalNumber = (decimalNumber << 1) | (c - '0');
    }

    cout << "THE NUMBER IN HEXADECIMAL IS: ";
    cout << hex << uppercase << decimalNumber << endl;

    return 0;
}

