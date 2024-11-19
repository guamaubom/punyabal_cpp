#include <iostream>
using namespace std;

int main() {
    int jumlahMahasiswa, lulus = 0, tidakLulus = 0;
    float nilai;
    string nama;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMasukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin.ignore();
        getline(cin, nama);
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << ": ";
        cin >> nilai;

        if (nilai >= 70) {
            cout << "Mahasiswa " << nama << " dinyatakan LULUS." << endl;
            lulus++;
        } else if (nilai <= 60) {
            cout << "Mahasiswa " << nama << " dinyatakan TIDAK LULUS." << endl;
            tidakLulus++;
        } else {
            cout << "Mahasiswa " << nama << " memiliki nilai selain 60 atau 70." << endl;
        }
    }

    cout << "\nJumlah mahasiswa yang LULUS: " << lulus << endl;
    cout << "Jumlah mahasiswa yang TIDAK LULUS: " << tidakLulus << endl;

    return 0;
}
