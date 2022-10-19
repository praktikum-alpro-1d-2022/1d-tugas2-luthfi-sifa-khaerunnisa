#include <iostream>
#include <string>

using namespace std;

int main ()
{
    char again;
    int choose;
    float L, s, p, l, a, t, b, d1, d2, r, Y, T;
    float const phi = 3.14;
    cout << "Mencari luas bangun datar" << endl;
    cout << "" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Trapesium" << endl;
    cout << "5. Jajar Genjang" << endl;
    cout << "6. Belah Ketupat" << endl;
    cout << "7. Layang-Layang" << endl;
    cout << "8. Lingkaran" << endl;
    cout << endl;
 {
    cout << "Masukkan pilihan anda :"; cin >> choose;
    system ("cls");
    switch (choose)
        {
            case 1 :
                {
                    cout << "Anda Memilih Luas Persegi" << endl;
                    cout << "Masukkan nilai sisi :" << endl;
                    cin >> s;
                    L = s*s;
                    cout << "Luas Persegi adalah :" << "" << L << "cm2" << endl;
                }
            case 2 :
                {
                    cout << "Anda Memilih Luas Persegi Panjang" << endl;
                    cout << "Masukkan nilai panjang :" << endl;
                    cin >> p;
                    cout << "Masukkan nilai lebar :" << endl;
                    cin >> l;
                    L = p*l;
                    cout << "Luas Persegi Panjang adalah :" << "" << L << "cm2" << endl;
                }
            case 3 :
                {
                    cout << "Anda memilih Luas Segitiga" << endl;
                    cout << "Masukkan nilai alas :" << endl;
                    cin >> a;
                    cout << "Masukkan nilai tinggi : " << endl;
                    cin >> t;
                    L = 0.5*a*t;
                    cout << "Luas Segitiga adalah :" << "" << L << "cm2" << endl;
                }
            case 4 :
                {
                    cout << "Anda memilih Luas Trapesium" << endl;
                    cout << "Masukkan nilai panjang sisi sejajar yang pendek :" << endl;
                    cin >> a;
                    cout << "Masukkan nilai panjang sisi sejajar yang panjang :" << endl;
                    cin >> b;
                    cout << "Masukkan nilai tinggi :" << endl;
                    cin >> t;
                    L = 0.5*(a+b)*t;
                    cout << "Luas Trapesium adalah :" << "" << L << "cm2" << endl;
                }
            case 5 :
                {
                    cout << "Anda memilih Luas Jajar Genjang" << endl;
                    cout << "Masukkan nilai alas : " << endl;
                    cin >> a;
                    cout << "Masukkan nilai tinggi :" << endl;
                    cin >> t;
                    L =  a*t;
                    cout << "Luas Jajar Genjang adalah :" << "" << L << "cm2" << endl;
                }
            case 6 :
                {
                    cout << "Anda memilih Luas Belah Ketupat" << endl;
                    cout << "Masukkan nilai diagonal 1 :" << endl;
                    cin >> d1;
                    cout << "Masukkan nilai diagonal 2 :" << endl;
                    cin >> d2;
                    L = 0.5*d1*d2;
                    cout << "Luas Belah Ketupat adalah :" << "" << L << "cm2" << endl;
                }
           case 7 :
                {
                    cout << "Anda memilih Luas Layang-Layang" << endl;
                    cout << "Masukkan nilai diagonal 1 :" << endl;
                    cin >> d1;
                    cout << "Masukkan nilai diagonal 2 :" << endl;
                    cin >> d2;
                    L = 0.5*d1*d2;
                    cout << "Luas Layang-Layang adalah :" << "" << L << "cm2" << endl;
                }
            case 8 :
                {
                    cout << "Anda memilih Luas Lingkaran" << endl;
                    cout << "Masukkan nilai jari-jari :" << endl;
                    cin >> r;
                    L = phi*r*r;
                    cout << "Luas Lingkaran adalah :" << "" << L << "cm2" << endl;
                }
        }
    }
}
