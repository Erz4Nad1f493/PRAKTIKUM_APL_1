#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // login
    string nama, pass;
    int Login = 0;
    bool loginBerhasil = false;

    // Loop untuk login sampai 3 kali
    while (Login < 3) {
        cout << "-silahkan masukkan username dan password-" << endl;
        cout << "Username: ";
        getline(cin, nama);
        cout << "password: ";
        getline(cin, pass);

        // percobaan login
        if (nama == "ersa nadifa" && pass == "2309106093") {
            loginBerhasil = true;
            break;
        } else {
            cout << "Data yang di berikan salah, coba lagi" << endl;
            Login++;
        }
    }
    // validasi apakah login berhasil atau tidak
    if (!loginBerhasil) {
        cout << "anda memasukkan Data yang salah 3 kali, program dihentikan" << endl;
        return 0;
    }

    // menu
    int Menu;
    double nilaiSuhu;

    do {
        cout << "\n-Konversi Suhu-" << endl;
        cout << "1. Konversi suhu Celcius\n2. Konversi suhu Reamur\n3. Konversi suhu Farenheit\n4. Konversi suhu Kelvin\n0. berhenti" << endl;
        cout << "Pilih menu: ";
        cin >> Menu;

        switch (Menu) {
            case 1:
                cout << "Suhu dalam bentuk Celcius yang ingin di konversi: ";
                cin >> nilaiSuhu;
                cout << "Konversi ke Reamur: " << (nilaiSuhu * 4.0 / 5.0) << endl;
                cout << "Konversi ke Farenheit: " << ((nilaiSuhu * 9.0 / 5.0) + 32) << endl;
                cout << "Konversi ke Kelvin: " << (nilaiSuhu + 273.15) << endl;
                break;
            case 2:
                cout << "Suhu dalam bentuk Reamur yang ingin di konversi: ";
                cin >> nilaiSuhu;
                cout << "Konversi ke Celcius: " << (nilaiSuhu * 5.0 / 4.0) << endl;
                cout << "Konversi ke Farenheit: " << ((nilaiSuhu * 9.0 / 4.0) + 32) << endl;
                cout << "Konversi ke Kelvin: " << ((nilaiSuhu * 5.0 / 4.0) + 273.15) << endl;
                break;
            case 3:
                cout << "Suhu dalam bentuk Farenheit yang ingin di konversi: ";
                cin >> nilaiSuhu;
                cout << "Konversi ke Celcius: " << ((nilaiSuhu - 32) * 5.0 / 9.0) << endl;
                cout << "Konversi ke Reamur: " << ((nilaiSuhu - 32) * 4.0 / 9.0) << endl;
                cout << "Konversi ke Kelvin: " << (((nilaiSuhu - 32) * 5.0 / 9.0) + 273.15) << endl;
                break;
            case 4:
                cout << "Suhu dalam bentuk Kelvin yang ingin di konversi: ";
                cin >> nilaiSuhu;
                cout << "Konversi ke Celcius: " << (nilaiSuhu - 273.15) << endl;
                cout << "Konversi ke Reamur: " << ((nilaiSuhu - 273.15) * 4.0 / 5.0) << endl;
                cout << "Konversi ke Farenheit: " << (((nilaiSuhu - 273.15) * 9.0 / 5.0) + 32) << endl;
                break;
            case 0:
                cout << "Program dihentika, Terimakasih" << endl;
                break;
            default:
                cout << "Menu yang di pilih tidak valid, Pilih kembali" << endl;
        }

    } while (Menu != 0);

    return 0;
}
