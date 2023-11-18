#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    queue tugas, QGenap, QGanjil;
    address emptyThis;
    cout << "Cek awal" << endl;
    createQueue(tugas);
    enQueue(tugas, alokasi(2));
    enQueue(tugas, alokasi(3));
    enQueue(tugas, alokasi(4));
    enQueue(tugas, alokasi(5));
    enQueue(tugas, alokasi(6));
    enQueue(tugas, alokasi(7));
    enQueue(tugas, alokasi(8));
    enQueue(tugas, alokasi(9));
    enQueue(tugas, alokasi(10));
    enQueue(tugas, alokasi(11));
    printInfo(tugas);
    cout << endl << "Fungsi NB of Elemen" << endl;
    cout << nbOfElm(tugas) << endl;
    cout << endl << "Ganjil Genap" << endl << "Kondisi awal" << endl;
    createQueue(QGanjil);
    createQueue(QGenap);
    printInfo(tugas);
    ganjilGenap(tugas, QGanjil, QGenap);
    cout << endl << "Kondisi Akhir" << endl;
    printInfo(tugas);
    cout << endl << "Queue Ganjil" << endl;
    printInfo(QGanjil);
    cout << endl << "Queue Genap" << endl;
    printInfo(QGenap);
    return 0;
}
