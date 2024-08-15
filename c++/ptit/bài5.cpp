#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void inThuong(string str) {
    for (char& c : str) {
        if (isupper(c)) {
            c = tolower(c);
        }
    }
    cout << str << endl;
}

void inHoa(string str) {
    for (char& c : str) {
        if (islower(c)) {
            c = toupper(c);
        }
    }
    cout << str << endl;
}

int main() {
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    // In chuoi thuong
    cout << "\nChuoi in thuong: ";
    inThuong(str);

    // In chuoi hoa
    cout << "\nChuoi in hoa: ";
    inHoa(str);

    return 0;
}

