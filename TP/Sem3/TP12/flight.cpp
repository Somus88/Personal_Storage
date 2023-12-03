#include <iostream>
#include "flight.h"
using namespace std;

void createListJadwal_1303220104(listJadwal &L)
{
    first(L) = NULL;
}
adr_jadwalP createElemenJadwal_1303220104(infotype X)
{
    adr_jadwalP P = new elemenJadwal;
    info(P) = X;
    next(P) = NULL;
    return P;
}
void insertLastJ_1303220104(listJadwal &L, adr_jadwalP P)
{
    adr_jadwalP Q;
    if(first(L) == NULL)
    {
        first(L) = P;
    }else
    {
        Q = first(L);
        while(next(Q) != NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
}
void showJadwal_1303220104(listJadwal L)
{
    adr_jadwalP P = first(L);
    while(P != NULL)
    {
        cout << "Kode: "<< info(P).kode << "\nJenis: " << info(P).jenis << " Tanggal: " << info(P).tanggal << " Waktu: " << info(P).waktu << " Asal: " << info(P).asal << " Tujuan: " << info(P).tujuan << " Kapasitas: " << info(P).kapasitas << endl;
        P = next(P);
    }
}
void deleteFirstJ_1303220104(listJadwal &L, adr_jadwalP &P)
{
    P = first(L);
    first(L) = next(first(L));
    next(P) = NULL;
}
adr_jadwalP searchJ_1303220104(listJadwal L, string dari, string ke, string tanggal)
{
    adr_jadwalP P = first(L);
    adr_jadwalP keluar = NULL;

    while(P != NULL)
    {
        if(info(P).asal == dari && info(P).tujuan == ke && info(P).tanggal == tanggal)
        {
            keluar = P;
            break;
        }
        P = next(P);
    }
    return keluar;
}
