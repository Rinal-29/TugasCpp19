#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

main()
{
   float keaktifan, uas, mid, jumlah, rata2;
   float rata;
   char nama[50], nim[50];
   int kehadiran;

   cout << "Menghitung Nilai Sederhana" << endl; // cout sebgai fungsi output (menampilkan)
   cout << "=========================" << endl;  // endl sebagi fungsi manipulator (memberi garis baru)
   cout << "Nama \t\t= ";                        // \t merupakan fungsi escape senguance (tab)
   gets(nama);                                   // gets sebagai fungsi inputan (masukan)
   cout << "Nim \t\t= ";
   cin >> nim; // cin sebgai fungsi inputan (masukan)
   cout << "Nilai Keaktifan = ";
   cin >> keaktifan;
   cout << "Nilai MID \t= ";
   cin >> mid;
   cout << "Nilai UAS \t= ";
   cin >> uas;

   system("cls"); // sebagai fungsi membersihkan tampilan

   keaktifan = keaktifan * 0.4;
   uas = uas * 0.3;
   mid = mid * 0.3;

   jumlah = keaktifan + uas + mid;
   rata2 = jumlah / 3;

   cout << "===========================================" << endl;
   cout << "Nilai Hasil" << endl;
   cout << "===========================================" << endl;
   cout << fixed; // fixed manipulator dengan nilai desimal
   cout << right; // rigth fungsi manipulator untuk melakukan perataan sebelah kanan
   cout << "Nama \t: " << nama << endl;
   cout << "Nim \t: " << nim << endl;
   cout << "Nilai Keaktifan (40%) \t= " << setw(3) << setprecision(3) << keaktifan << endl; // setw dan setprecision sebgai fungsi manipulator
   cout << "Nilai MID (30%) \t= " << setw(3) << setprecision(2) << mid << endl;
   cout << "Nilai UAS (30%) \t= " << setw(3) << setprecision(1) << uas << endl;
   cout << showpoint; // showpoint sebagai fungsi manipulator untuk menampilkan titik desimal
   cout << "Total Nilai \t\t= " << setw(3) << jumlah << endl;
   cout << "Rata - Rata nilai kuis \t= " << setw(3) << rata2 << endl
        << endl;

   cout << setfill('='); // manipulator menambah karakter didepan suatu nilai
   cout << "===========================================" << endl;
   cout << "Total kehadiran dalam dec, hex, oktal" << endl;
   cout << "===========================================" << endl;
   cout << "Total Kehdiran = ";
   cin >> kehadiran;
   cout << "Total Kehadiran (Bilangan Bulat) \t" << setw(3) << kehadiran << endl;
   cout << "Total Kehadiran (Desimal) \t\t= " << dec << kehadiran << endl;      // dec() sebagai fungsi manipulator bilangan decimal
   cout << "Total Kehadiran (Hexadesimal) \t= " << hex << kehadiran << endl;    // hex() sebagai fungsi manipulator bilangan hexadecimal
   cout << "Total Kehadiran (oktal) \t\t= " << setbase(8) << kehadiran << endl; // setbase(8) sebagai fungsi manipulator oktal
}