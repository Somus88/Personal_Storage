#include <iostream>
#include "flight.h"

using namespace std;

int main()
{
    listJadwal L;
    int n;
    infotype X;
    adr_jadwalP P, cari;

    cout << "Berapa yang diinput (3) ";
    createListJadwal(L);
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin.ignore();
        cout << "Input Kode ";
        getline(cin, X.kode);
        cout << "Input Jenis ";
        getline(cin, X.jenis);
        cout << "Input Tanggal ";
        getline(cin, X.tanggal);
        cout << "Input Waktu ";
        getline(cin, X.waktu);
        cout << "Input Asal ";
        getline(cin, X.asal);
        cout << "Input Tujuan ";
        getline(cin, X.tujuan);
        cout << "Input Kapasitas ";
        cin >> X.kapasitas;
        P = createElemenJadwal(X);
        insertLastJ(L, P);
    }
    showJadwal(L);
    cout << "delete first" << endl;
    deleteFirstJ(L, P);
    delete P;
    showJadwal(L);
    cout << "searching" << endl;
    cari = searchJ(L, "Surabaya (SUB)", "Malang (MLG)", "9 Desember 2022");
    cout << "Kode: "<< info(cari).kode << "\nJenis: " << info(cari).jenis << " Tanggal: " << info(cari).tanggal << " Waktu: " << info(cari).waktu << " Asal: " << info(cari).asal << " Tujuan: " << info(cari).tujuan << " Kapasitas: " << info(cari).kapasitas << endl;
    return 0;
}
