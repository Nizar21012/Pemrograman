#include <iostream>
#include <string>
using namespace std;

int main() {
    string userID, password;
    string validID = "admin";
    string validPassword = "12345";

    cout << "=== Login System ===" << endl;
    cout << "Masukkan ID: ";
    cin >> userID;
    cout << "Masukkan Password: ";
    cin >> password;

    if (userID == validID && password == validPassword) {
        cout << "Login berhasil! Selamat datang, " << userID << "." << endl;
    } else {
        cout << "Login gagal! ID atau Password salah." << endl;
    }

    return 0;
}
