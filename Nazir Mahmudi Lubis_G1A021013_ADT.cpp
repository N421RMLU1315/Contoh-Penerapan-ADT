#include <iostream>
using namespace std;

int main()
{
    float sisi_alas, sisi_atas, tinggi;
    float hasil;

    cout <<"Menghitung Luas Trapesium\n";

    cout <<"\nMasukkan Sisi Pertama\t: ";
    cin>>sisi_alas;
    cout <<"\nMasukkan Sisi Kedua\t: ";
    cin>>sisi_atas;
    cout <<"\nMasukkan Tinggi\t\t: ";
    cin>>tinggi;

    cout <<"\nRumus Luas Trapesium\t= 1/2 (sisi1 + sisi2) x tinggi";
    cout <<"\n\t\t\t= " <<"1/2 ("<<sisi_alas <<" + " <<sisi_atas <<") x " <<tinggi;
    hasil = ((sisi_alas + sisi_atas) * tinggi) / 2;
    cout <<"\nHasilnya adalah\t\t: "<<hasil;
    return 0;
}
