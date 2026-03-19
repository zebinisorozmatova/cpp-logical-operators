#include <iostream>
#include <string>
using namespace std;

int main() {
    string login = "admin";
    string parol = "1234";

    if (login == "admin" && parol == "1234") {
        cout << "Kirish muvaffaqiyatli";
    } else {
        cout << "Xato login yoki parol";
    }
}