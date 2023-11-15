#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack tugas;
    stack tugasClone;
    createStack(tugas);
    createStack(tugasClone);
    infotype x;
    for(int i = 0; i<3; i++)
    {
        cout << "Masukkan data" << endl;
        cin >> x.nama;
        cin >> x.nim;
        cin >> x.ipk;
        push(tugas, x);
    }
    cout << endl;
    printInfo(tugas);
    cout << "Finddata" << endl;
    findData(tugas);
    printInfo(tugas);
    cout << "moveData" << endl;
    moveData(tugas, tugasClone);
    printInfo(tugasClone);
    cout << "delstack" << endl;
    hapusStack(tugasClone);
    printInfo(tugasClone);
    cout << "addnewdata" << endl;
    cout << "Masukkan data" << endl;
    cin >> x.nama;
    cin >> x.nim;
    cin >> x.ipk;
    addNewData(tugas, x);
    printInfo(tugas);
    cout << "deleteData" << endl;
    deleteData(tugas);
    printInfo(tugas);
    cout << "add" << endl;
    add(tugas, "void", "123", 3);
    printInfo(tugas);
    
    //no 9 sama aja kayak deletedata/pop cmn ganti2 variabel doang
    

    return 0;
}
