#include <iostream>
#include "DLL.h"

using namespace std;

int main()
{
    infotype lagu;
    address P,Prec;
    List L1,L2,L3;
    string searchLagu;
    int jumlahMasuk = 2;

    createList_1303220104(L1);
    createList_1303220104(L2);
    createList_1303220104(L3);

    cout << "Melakukan Insert First pada List 1." << endl;

    for (int i = 1; i<=jumlahMasuk; i++)
    {
        cout << "Masukkan lagu: ";
        getline(cin, lagu.judul);
        cout << "Masukkan artist lagu: ";
        getline(cin, lagu.artist);
        P = createNewElmt_1303220104(lagu);
        insertFirst_1303220104(L1,P);
    }
    printAll_1303220104(L1);
    cout << endl;

    cout << "Melakukan Insert After pada List 1." << endl;

    cout << "Masukkan lagu: ";
    getline(cin, lagu.judul);
    cout << "Masukkan artist lagu: ";
    getline(cin, lagu.artist);
    cout << "Mau masukkan setelah lagu apa? ";
    getline(cin, searchLagu);
    Prec = findLagu_1303220104(searchLagu, L1);
    P = createNewElmt_1303220104(lagu);
    insertAfter_1303220104(L1, Prec, P);
    printAll_1303220104(L1);
    cout << endl;

    cout << "Melakukan Insert Last pada List 2." << endl;

    for (int i = 1; i<=jumlahMasuk; i++)
    {
        cout << "Masukkan lagu: ";
        getline(cin, lagu.judul);
        cout << "Masukkan artist lagu: ";
        getline(cin, lagu.artist);
        P = createNewElmt_1303220104(lagu);
        insertLast_1303220104(L2,P);
    }
    printAll_1303220104(L2);
    cout << endl;

    cout << "Akan menggabungkan dua list lagu. " << endl;
    printAll_1303220104(L1);
    printAll_1303220104(L2);
    createList_1303220104(L3);
    concat_1303220104(L1, L2, L3);
    cout << endl;

    cout << "Hasil penggabungan: " << endl;
    printAll_1303220104(L3);
    cout << endl;

    cout << "Menghapus data pertama." << endl;
    deleteFirst_1303220104(L3, P);
    printAll_1303220104(L3);
    cout << endl;

    cout << "Menghapus data terakhir." << endl;
    deleteLast_1303220104(L3, P);
    printAll_1303220104(L3);
    cout << endl;

    cout << "Menghapus data setelah lagu berikut." << endl;
    getline(cin, searchLagu);
    Prec = findLagu_1303220104(searchLagu, L3);
    deleteAfter_1303220104(L3, Prec, P);
    printAll_1303220104(L3);
    cout << endl;

    cout << "Menghapus lagu berikut." << endl;
    getline(cin, searchLagu);
    Prec = findLagu_1303220104(searchLagu, L3);
    removeLagu_1303220104(searchLagu,L3);
    printAll_1303220104(L3);
    cout << endl;

    cout << "Terima kasih";

    return 0;
}
