#include <iostream>
#include <string>

using namespace std;

// Prosedur untuk masukan data (menggunakan pass-by-reference agar nilai tersimpan)
void masukanData(double &berat, double &tinggi) {
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggi;
}

// Fungsi untuk menghitung BMI
double hitungBMI(double berat, double tinggi) {
    return berat / (tinggi * tinggi);
}

// Fungsi untuk melihat kondisi berat badan
string cekKondisi(double bmi){
    
}