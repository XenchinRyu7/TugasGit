#include <iostream>
using namespace std;

int send_text () {
    int send = rand() % 10;
    return send;
}

int main () {
    string data_kata[10] = {"saya", "kamu", "kita", "dia", "orang", "gunung", "jembatan", "musuh", "apapun", "dan"}, input;
    int ulang, benar = 0;

    cout << "Selamat datang di program test kecepatan mengetik!" << endl;
    cout << "Berapa kata yang ingin anda ketik? : ";
    cin >> ulang;
    for (int i = 0; i < ulang; i++) {
        int random = send_text();
        cout << data_kata[random] << endl;
        cout << "Masukan disini : ";
        cin >> input;

        if (input == data_kata[random]) {
            benar++;
        }
    }

    cout << "Dalam total " << ulang << " kata, anda benar " << benar << " kata.";

    return 0;
}