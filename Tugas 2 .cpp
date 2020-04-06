#include <iostream>
#include <conio.h>

using namespace std;

main()
{
    char nama[20];
    int nim, totsks = 19;
    float mutupkn, mutubasing, mutukalkulus, mutufisika, mutudrl, mutudpk, mutuprakdpk, mutusisdig, totmutu;
    string pkn, basing, kalkulus, fisika, drl, dpk, prakdpk, sisdig, ket;
    float ip;

    cout << "Nama Mahasiswa \t\t\t = ";
    gets(nama);
    cout << "NIM \t\t\t\t = ";
    cin >> nim;

    cout << endl
         << endl;
    cout << "Matakuliah dan Nilai" << endl;
    cout << "Pancasila dan Kewarganegaraan \t= ";
    cin >> pkn;
    cout << "Bahasa Inggris \t\t\t= ";
    cin >> basing;
    cout << "Kalkulus II \t\t\t= ";
    cin >> kalkulus;
    cout << "Fisika Dasar II \t\t= ";
    cin >> fisika;
    cout << "Dasar Rangkain Listrik \t\t= ";
    cin >> drl;
    cout << "Dasar Praktikum Komputer \t= ";
    cin >> dpk;
    cout << "Prak Dasar Praktikum Komputer \t= ";
    cin >> prakdpk;
    cout << "Sistem Digital \t\t\t= ";
    cin >> sisdig;

    // pkn
    if (pkn == "A" || pkn == "a")
    {
        mutupkn = 4 * 3;
    }
    else if (pkn == "A-" || pkn == "a-")
    {
        mutupkn = 3.75 * 3;
    }
    else if (pkn == "B+" || pkn == "b+")
    {
        mutupkn = 3.5 * 3;
    }
    else if (pkn == "B" || pkn == "b")
    {
        mutupkn = 3 * 3;
    }
    else if (pkn == "B-" || pkn == "b-")
    {
        mutupkn = 2.75 * 3;
    }
    else if (pkn == "C+" || pkn == "c+")
    {
        mutupkn = 2.5 * 3;
    }
    else if (pkn == "C" || pkn == "c")
    {
        mutupkn = 2 * 3;
    }
    else if (pkn == "D" || pkn == "d")
    {
        mutupkn = 1 * 3;
    }
    else
    {
        mutupkn = 0;
    }

    //basing
    if (basing == "A" || basing == "a")
    {
        mutubasing = 4 * 3;
    }
    else if (basing == "A-" || basing == "a-")
    {
        mutubasing = 3.75 * 3;
    }
    else if (basing == "B+" || basing == "b+")
    {
        mutubasing = 3.5 * 3;
    }
    else if (basing == "B" || basing == "b")
    {
        mutubasing = 3 * 3;
    }
    else if (basing == "B-" || basing == "b-")
    {
        mutubasing = 2.75 * 3;
    }
    else if (basing == "C+" || basing == "c+")
    {
        mutubasing = 2.5 * 3;
    }
    else if (basing == "C" || basing == "c")
    {
        mutubasing = 2 * 3;
    }
    else if (basing == "D" || basing == "d")
    {
        mutubasing = 1 * 3;
    }
    else
    {
        mutubasing = 0;
    }

    //kalkulus
    if (kalkulus == "A" || kalkulus == "a")
    {
        mutukalkulus = 4 * 3;
    }
    else if (kalkulus == "A-" || kalkulus == "a-")
    {
        mutukalkulus = 3.75 * 3;
    }
    else if (kalkulus == "B+" || kalkulus == "b+")
    {
        mutukalkulus = 3.5 * 3;
    }
    else if (kalkulus == "B" || kalkulus == "b")
    {
        mutukalkulus = 3 * 3;
    }
    else if (kalkulus == "B-" || kalkulus == "b-")
    {
        mutukalkulus = 2.75 * 3;
    }
    else if (kalkulus == "C+" || kalkulus == "c+")
    {
        mutukalkulus = 2.5 * 3;
    }
    else if (kalkulus == "C" || kalkulus == "c")
    {
        mutukalkulus = 2 * 3;
    }
    else if (kalkulus == "D" || kalkulus == "d")
    {
        mutukalkulus = 1 * 3;
    }
    else
    {
        mutukalkulus = 0;
    }

    //fisika
    if (fisika == "A" || fisika == "a")
    {
        mutufisika = 4 * 3;
    }
    else if (fisika == "A-" || fisika == "a-")
    {
        mutufisika = 3.75 * 3;
    }
    else if (fisika == "B+" || fisika == "b+")
    {
        mutufisika = 3.5 * 3;
    }
    else if (fisika == "B" || fisika == "b")
    {
        mutufisika = 3 * 3;
    }
    else if (fisika == "B-" || fisika == "b-")
    {
        mutufisika = 2.75 * 3;
    }
    else if (fisika == "C+" || fisika == "c+")
    {
        mutufisika = 2.5 * 3;
    }
    else if (fisika == "C" || fisika == "c")
    {
        mutufisika = 2 * 3;
    }
    else if (fisika == "D" || fisika == "d")
    {
        mutufisika = 1 * 3;
    }
    else
    {
        mutufisika = 0;
    }

    //drl
    if (drl == "A" || drl == "a")
    {
        mutudrl = 4 * 2;
    }
    else if (drl == "A-" || drl == "a-")
    {
        mutudrl = 3.75 * 2;
    }
    else if (drl == "B+" || drl == "b+")
    {
        mutudrl = 3.5 * 2;
    }
    else if (drl == "B" || drl == "b")
    {
        mutudrl = 3 * 2;
    }
    else if (drl == "B-" || drl == "b-")
    {
        mutudrl = 2.75 * 2;
    }
    else if (drl == "C+" || drl == "c+")
    {
        mutudrl = 2.5 * 2;
    }
    else if (drl == "C" || drl == "c")
    {
        mutudrl = 2 * 2;
    }
    else if (drl == "D" || drl == "d")
    {
        mutudrl = 1 * 2;
    }
    else
    {
        mutudrl = 0;
    }

    //dpk
    if (dpk == "A" || dpk == "a")
    {
        mutudpk = 4 * 2;
    }
    else if (dpk == "A-" || dpk == "a-")
    {
        mutudpk = 3.75 * 2;
    }
    else if (dpk == "B+" || dpk == "b+")
    {
        mutudpk = 3.5 * 2;
    }
    else if (dpk == "B" || dpk == "b")
    {
        mutudpk = 3 * 2;
    }
    else if (dpk == "B-" || dpk == "b-")
    {
        mutudpk = 2.75 * 2;
    }
    else if (dpk == "C+" || dpk == "c+")
    {
        mutudpk = 2.5 * 2;
    }
    else if (dpk == "C" || dpk == "c")
    {
        mutudpk = 2 * 2;
    }
    else if (dpk == "D" || dpk == "d")
    {
        mutudpk = 1 * 2;
    }
    else
    {
        mutudpk = 0;
    }

    //prakdpk
    if (prakdpk == "A" || prakdpk == "a")
    {
        mutuprakdpk = 4 * 1;
    }
    else if (prakdpk == "A-" || prakdpk == "a-")
    {
        mutuprakdpk = 3.75 * 1;
    }
    else if (prakdpk == "B+" || prakdpk == "b+")
    {
        mutuprakdpk = 3.5 * 1;
    }
    else if (prakdpk == "B" || prakdpk == "b")
    {
        mutuprakdpk = 3 * 1;
    }
    else if (prakdpk == "B-" || prakdpk == "b-")
    {
        mutuprakdpk = 2.75 * 1;
    }
    else if (prakdpk == "C+" || prakdpk == "c+")
    {
        mutuprakdpk = 2.5 * 1;
    }
    else if (prakdpk == "C" || prakdpk == "c")
    {
        mutuprakdpk = 2 * 1;
    }
    else if (prakdpk == "D" || prakdpk == "d")
    {
        mutuprakdpk = 1 * 1;
    }
    else
    {
        mutuprakdpk = 0;
    }

    //sisdig
    if (sisdig == "A" || sisdig == "a")
    {
        mutusisdig = 4 * 2;
    }
    else if (sisdig == "A-" || sisdig == "a-")
    {
        mutusisdig = 3.75 * 2;
    }
    else if (sisdig == "B+" || sisdig == "b+")
    {
        mutusisdig = 3.5 * 2;
    }
    else if (sisdig == "B" || sisdig == "b")
    {
        mutusisdig = 3 * 2;
    }
    else if (sisdig == "B-" || sisdig == "b-")
    {
        mutusisdig = 2.75 * 2;
    }
    else if (sisdig == "C+" || sisdig == "c+")
    {
        mutusisdig = 2.5 * 2;
    }
    else if (sisdig == "C" || sisdig == "c")
    {
        mutusisdig = 2 * 2;
    }
    else if (sisdig == "D" || sisdig == "d")
    {
        mutusisdig = 1 * 2;
    }
    else
    {
        mutusisdig = 0;
    }

    totmutu = mutupkn + mutubasing + mutukalkulus + mutufisika + mutudrl + mutudpk + mutuprakdpk + mutusisdig;
    ip = totmutu / totsks;

    cout << endl;
    cout << "Indeks Prestasi Semester II \t= " << ip << endl;

    if (ip >= 3.51 && ip <= 4.00)
    {
        ket = "Pujian";
    }
    else if (ip >= 3.01 && ip <= 3.50)
    {
        ket = "Sangat Memuaskan";
    }
    else if (ip >= 2.76 && ip <= 3.00)
    {
        ket = "memuaskan";
    }
    else
    {
        ket = " - ";
    }

    cout << "Keterangan \t\t\t= " << ket;
}
