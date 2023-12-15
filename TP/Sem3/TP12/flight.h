#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;

struct jadwalPenerbangan
{
    string kode, jenis, tanggal, waktu, asal, tujuan;
    int kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;
typedef jadwalPenerbangan infotype;

struct elemenJadwal
{
    infotype info;
    adr_jadwalP next;
};

struct listJadwal
{
    adr_jadwalP first;
};

void createListJadwal(listJadwal &L);
adr_jadwalP createElemenJadwal(infotype X);
void insertLastJ(listJadwal &L, adr_jadwalP P);
void showJadwal(listJadwal L);
void deleteFirstJ(listJadwal &L, adr_jadwalP &P);
adr_jadwalP searchJ(listJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
