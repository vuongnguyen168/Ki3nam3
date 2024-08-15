#include <iostream>
#include <string>

using namespace std;

void inputNumber(int &number) {
    string input;
    getline(cin, input);
    number = stoi(input);
}

void outputNumber(int number) {
    cout << number << endl;
}

int main() {
    int sum = 0;
    int quantity;
    
    cout << "NHAP SO LUONG: ";
    inputNumber(quantity);
    
    cout << "NHAP CAC SO: " << endl;
    
    for (int i = 0; i < quantity; ++i) {
        int num;
        inputNumber(num);
        sum += num;
    }
    
    cout << "TONG CAC SO VUA NHAP: ";
    outputNumber(sum);
    
    return 0;
}

