#include <iostream>
#include "queue.h"
using namespace std;

address alokasi(infotype info)
{
    address p = new elmQ;
    info(p) = info;
    next(p) = NULL;

    return p;
}

void createQueue(queue &Q)
{
    head(Q) = NULL;
}
void enQueue(queue &Q, address P)
{
    if(head(Q) == NULL)
    {
        head(Q) = P;
        tail(Q) = P;
    }else
    {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}
void deQueue(queue &Q, address P)
{
    if(head(Q) == NULL)
    {
        cout << "Queue kosong" << endl;
    }else if(next(head(Q)) == NULL) //kondisi satu elemen
    {
        P = head(Q);
        head(Q) = NULL;
        delete P;
    }else
    {
        P = head(Q);
        head(Q) = next(P);
        next(P) = NULL;
    }
}
void tambahAntri(queue &Q)
{
    infotype P;

    cout << "Memasukkan data baru" << endl;
    cout << "Nama: ";
    cin >> P.nama;
    cout << endl << "Waktu datang: ";
    cin >> P.waktuDtg;
    cout << endl << "Jumlah Koper: ";
    cin >> P.nKoper;
    cout << endl;

    if(head(Q) == NULL)
    {
        P.waktuAntri = 0;
        P.waktuSelesai = ((3*P.nKoper) +5) + P.waktuDtg;
        enQueue(Q, alokasi(P));
    }else
    {
        P.waktuAntri = info(tail(Q)).waktuSelesai - P.waktuDtg;
        if (P.waktuAntri < 0){
            P.waktuAntri = 0;
        }
        if(P.waktuDtg > info(tail(Q)).waktuSelesai)
        {
            P.waktuSelesai = ((3*P.nKoper) + 5) + P.waktuDtg;
        }else
        {
            P.waktuSelesai = ((3*P.nKoper) + 5) + info(tail(Q)).waktuSelesai;
        }
        enQueue(Q, alokasi(P));
    }
}
void printInfo(queue Q)
{
    address P = head(Q);
    address R = tail(Q);

    if(P != NULL)
    {
        cout << "Waktu Mengantri : "<< info(R).waktuAntri << endl;
        cout << "Estimasi Selesai : "<< info(R).waktuSelesai << endl;
        cout << endl;

        cout << "Antrian Sekarang" << endl;
        while(P != NULL)
        {
            cout << "Nama: " << info(P).nama << endl;
            cout << "Waktu Datang: " << info(P).waktuDtg << endl;
            cout << "Jumlah Koper: " << info(P).nKoper << endl;
            cout << "Waktu Antrian: " << info(P).waktuAntri << endl;
            cout << "Estimasi Selesai: " << info(P).waktuSelesai << endl;
            P = next(P);
        }
    }else
    {
        cout << "Antrian Kosong" << endl;
    }
}
