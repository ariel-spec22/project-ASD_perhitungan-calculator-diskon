#include <iostream>
using namespace std;

int main() {
    float harga, diskon, hargaAkhir;
    int jumlahDiskon;

    cout << "=== Kalkulator Diskon Bertingkat ===" << endl;
    cout << "Masukkan harga barang : ";
    cin >> harga;

    cout << "Berapa kali diskon diterapkan? ";
    cin >> jumlahDiskon;

    hargaAkhir = harga;

    for (int i = 1; i <= jumlahDiskon; i++) {
        cout << "Masukkan diskon ke-" << i << " (%): ";
        cin >> diskon;
        hargaAkhir = hargaAkhir - (hargaAkhir * (diskon / 100));
    }

    cout << "\nHarga awal      : " << harga << endl;
    cout << "Jumlah diskon   : " << jumlahDiskon << " kali" << endl;
    cout << "Harga setelah semua diskon: " << hargaAkhir << endl;

    return 0;
}
