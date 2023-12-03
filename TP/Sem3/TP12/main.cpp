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
    createListJadwal_1303220104(L);
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
        P = createElemenJadwal_1303220104(X);
        insertLastJ_1303220104(L, P);
    }
    showJadwal_1303220104(L);
    cout << "delete first" << endl;
    deleteFirstJ_1303220104(L, P);
    delete P;
    showJadwal_1303220104(L);
    cout << "searching" << endl;
    cari = searchJ_1303220104(L, "Surabaya (SUB)", "Malang (MLG)", "9 Desember 2022");
    cout << "Kode: "<< info(cari).kode << "\nJenis: " << info(cari).jenis << " Tanggal: " << info(cari).tanggal << " Waktu: " << info(cari).waktu << " Asal: " << info(cari).asal << " Tujuan: " << info(cari).tujuan << " Kapasitas: " << info(cari).kapasitas << endl;
    return 0;
}
