#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    
    int jumlahMahasiswa;
    string nama;
    float nilaiMtk, nilaiIpa, nilaiIps, rataRata;


    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;

 
    for (int i = 0; i < jumlahMahasiswa; i++) {
    	
        cout << "\nMasukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin.ignore();
        getline(cin, nama);
        cout << "Masukkan nilai Matematika: ";
        cin >> nilaiMtk;
        cout << "Masukkan nilai IPA: ";
        cin >> nilaiIpa;
        cout << "Masukkan nilai IPS: ";
        cin >> nilaiIps;
		       
        rataRata = (nilaiMtk + nilaiIpa + nilaiIps) / 3;

        string status;
        if (rataRata > 70) {
            status = "Lulus";
        } else if (rataRata < 60) {
            status = "Tidak Lulus";
        } else {
            status = "Remedial";
        }
    cout << setw(10) << left << "Nama" 
         << setw(10) << left << "MTK"
         << setw(10) << left << "IPA"
         << setw(10) << left << "IPS"
         << setw(15) << left << "Rata-Rata"
         << setw(15) << left << "Status" << endl;
    cout << "------------------------------------------------------------" << endl;

   

        // Menampilkan data dalam bentuk tabel
        cout << setw(10) << left << nama 
             << setw(10) << left << nilaiMtk
             << setw(10) << left << nilaiIpa
             << setw(10) << left << nilaiIps
             << setw(15) << left << rataRata
             << setw(15) << left << status << endl;
    }

    return 0;
}

