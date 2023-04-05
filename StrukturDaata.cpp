// StrukturDaata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct DetailAlamat
{
    char desa[20];
    char kota[20];
};

struct Mahasiswa 
{
    char NIM[12];
    char Nama[20];
    DetailAlamat Alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Masukan NIM = ";
        cin.getline(mhs[i].NIM, 12);
        cout << "Masukan Nama = ";
        cin.getline(mhs[i].Nama, 20);
        cout << "Alamat :" << endl;
        cout << "Masukan Desa = ";
        cin.getline(mhs[i].Alamat.desa, 20);
        cout << "Masukan Kota = ";
        cin.getline(mhs[i].Alamat.kota, 20);
        cout << "Masukan Umur = ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
    }
   
    for (int i = 0; i < 3; i++)
    {
        cout << "\nNIM = " << mhs[i].NIM;
        cout << "\nNama = " << mhs[i].Nama;
        cout << "\nDesa = " << mhs[i].Alamat.desa;
        cout << "\nKota = " << mhs[i].Alamat.kota;
        cout << "\nUmur = " << mhs[i].umur;
    }

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
