// UjianAhir_Pemdas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MasukUniversitas
{
private:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

public:
    MasukUniversitas():
        uangPendaftaran(0),
        uangSemesterPertama(0),
        uangBangunan(0),
        totalBiaya(0);

        void setUangPendaftaran(double value) 
        {
            this->uangPendaftaran = 0;
        }

        float getUangPendaftaran()
        {
            return uangPendaftaran;
        }

        float getuangPendaftaran()
        {
            return uangPendaftaran;
        }

    string namaJalurMasuk();
    void input();
    void hitungTotalBiaya();
    void tampilkanTotalBiaya();
};

class SNBT : public MasukUniversitas {
public:
    string namaJalurMasuk() 
    {
        return "SNBT";
    }

    void input() 
    {
        cout << "Masukkan uang pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama: ";
        cin >> uangSemesterPertama;
        cout << "Masukkan uang bangunan: ";
        cin >> uangBangunan;
    }

    void hitungTotalBiaya()
    {
        totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }

    void tampilkanTotalBiaya() {
        cout << "Total biaya untuk jalur " << namaJalurMasuk() << endl;
        if (totalBiaya > 45100000) {
            cout << "Mahal" << endl;
        }
        else if (totalBiaya > 9100000) {
            cout << "Sedang" << endl;
        }
    }
};

class SNBP : public MasukUniversitas {
public:
    string namaJalurMasuk()
    {
        return "SNBP";
    }

    void input() 
    {
        cout << "Masukkan uang pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Masukkan uang semester pertama: ";
        cin >> uangSemesterPertama;
    }

    void hitungTotalBiaya() 
    {
        totalBiaya = uangPendaftaran + uangSemesterPertama;
    }

    void tampilkanTotalBiaya() 
    {
        cout << "Total biaya untuk jalur " << namaJalurMasuk() << endl;
        if (totalBiaya > 45100000) 
        {
            cout << "Mahal" << endl;
        }

        else if (totalBiaya > 9100000) 
        {
            cout << "Sedang" << endl;
        }
    }
};

int main()
{
    {

    }
    return 0;
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
