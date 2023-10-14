#include <iostream>
#include "list.h"
using namespace std;

void createList_1303220104(List &L)
{
    first(L) = NULL;
}
address allocate_1303220104(infotype x)
{
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;

    return P;
}
void insertLast_1303220104(List &L, address P)
{
    address Q;
    if (first(L) == NULL)
    {
        first(L) = P;
    }else
    {
        Q = first(L);
        while (next(Q) != NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
}
void printInfo_1303220104(List L)
{
    address P = first(L);
    while (P != NULL)
    {
        cout << info(P);
        P = next(P);
    }
    cout << endl;
}
address findMax_1303220104(List L)
{
    address P = first(L);
    address keluar;
    int max = 0;
    while (P != NULL)
    {
        if (info(P) > max)
        {
            max = info(P);
            keluar = P;
        }
        P = next(P);
    }
    return keluar;
}
void showMiddle_1303220104(List L)
{
    address P = first(L);
    int i = 0;
    int titikTengah = 0;
    while (P != NULL)
    {
        i++;
        P = next(P);
    }
    titikTengah = (i+1)/2;
    i = 1;
    P = first(L);
    while (i <= titikTengah)
    {
        if (i == titikTengah)
        {
            cout << info(P) << endl;
        }else
        {

        }
        P = next(P);
        i++;
    }
}
int selectMenu_1303220104()
{
    cout << "======MENU======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan data terbesar" << endl;
    cout << "4. Menampilkan data median" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukkan Pilihan: ";

    int input = 0;
    cin >> input;

    return input;
}
