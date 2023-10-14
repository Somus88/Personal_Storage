#include <iostream>
#include "list.h"
//NIM MOD = 0
using namespace std;

int main()
{
    infotype masuk;
    address P,biggest;
    List L;
    string x;
    int pilihan = 0, batasan = 0;
    createList_1303220104(L);
    pilihan = selectMenu_1303220104();
    while (pilihan != 0)
    {
        switch(pilihan)
        {
        case 1:
            cout << "Berapa angka? Harap masukkan batasan yang ganjil. ";
            cin >> batasan;
            for (int i = 1; i<= batasan; i++)
            {
                cout << "Masukkan data: ";
                cin >> masuk;
                P = allocate_1303220104(masuk);
                insertLast_1303220104(L,P);
            }
            cout << "Kembali ke menu utama? (Y/N) : ";
            cin >> x;
            if (x == "N")
            {
                cout << "program tutup" << endl;
                return 0;
            }
            break;
        case 2:
            cout << "Isi List: ";
            printInfo_1303220104(L);
            cout << "Kembali ke menu utama? (Y/N) : ";
            cin >> x;
            if (x == "N")
            {
                cout << "program tutup" << endl;
                return 0;
            }
            break;
        case 3:
            cout << "Data terbesar: ";
            biggest = findMax_1303220104(L);
            cout << info(biggest) << endl;
            cout << "Kembali ke menu utama? (Y/N) : ";
            cin >> x;
            if (x == "N")
            {
                cout << "program tutup" << endl;
                return 0;
            }
            break;
        case 4:
            cout << "Median data: ";
            showMiddle_1303220104(L);
            cout << "Kembali ke menu utama? (Y/N) : ";
            cin >> x;
            if (x == "N")
            {
                cout << "program tutup" << endl;
                return 0;
            }
            break;
        }
        pilihan = selectMenu_1303220104();
    }
    cout << "program tutup" << endl;
    return 0;
}
